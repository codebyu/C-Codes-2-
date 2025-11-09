#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

class Student {
    int rollno;
    char name[50];
    int p_marks, c_marks, m_marks, e_marks, cs_marks; // Marks in 5 subjects
    double percentage;
    char grade;

    void calculateGrade() {
        percentage = (p_marks + c_marks + m_marks + e_marks + cs_marks) / 5.0;
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else if (percentage >= 50)
            grade = 'E';
        else
            grade = 'F';
    }

public:
    void getData() {
        std::cout << "\nEnter student's roll number: ";
        std::cin >> rollno;
        std::cout << "Enter student's name: ";
        std::cin.ignore();
        std::cin.getline(name, 50);
        std::cout << "Enter marks in Physics [0-100]: ";
        std::cin >> p_marks;
        std::cout << "Enter marks in Chemistry [0-100]: ";
        std::cin >> c_marks;
        std::cout << "Enter marks in Maths [0-100]: ";
        std::cin >> m_marks;
        std::cout << "Enter marks in English [0-100]: ";
        std::cin >> e_marks;
        std::cout << "Enter marks in Computer Science [0-100]: ";
        std::cin >> cs_marks;
        calculateGrade();
    }

    void showData() const {
        std::cout << "\nRoll Number: " << rollno;
        std::cout << "\nName: " << name;
        std::cout << "\nPhysics: " << p_marks;
        std::cout << "\nChemistry: " << c_marks;
        std::cout << "\nMaths: " << m_marks;
        std::cout << "\nEnglish: " << e_marks;
        std::cout << "\nComputer Science: " << cs_marks;
        std::cout << "\nPercentage: " << std::fixed << std::setprecision(2) << percentage << "%";
        std::cout << "\nLetter Grade: " << grade;
    }

    void showTabular() const {
        std::cout << rollno << std::setw(12) << name << std::setw(10) << p_marks << std::setw(4) << c_marks << std::setw(4) << m_marks << std::setw(4)
             << e_marks << std::setw(4) << cs_marks << std::setw(8) << std::fixed << std::setprecision(2) << percentage << std::setw(6) << grade << std::endl;
    }
    
    int getRollNo() const {
        return rollno;
    }
};


void write_student();   
void display_all();     
void display_sp(int);   
void modify_student(int); 
void delete_student(int);  

int main() {
    char choice;
    int num;
    std::cout.setf(std::ios::fixed | std::ios::showpoint);
    std::cout << std::setprecision(2); 

    do {
        system("cls || clear"); // Clear the console screen
        std::cout << "\n\n\n\t\t\tSTUDENT REPORT CARD MANAGEMENT SYSTEM";
        std::cout << "\n\n\t1. CREATE STUDENT RECORD";
        std::cout << "\n\n\t2. DISPLAY ALL STUDENTS' RECORDS";
        std::cout << "\n\n\t3. SEARCH FOR A STUDENT RECORD";
        std::cout << "\n\n\t4. MODIFY A STUDENT RECORD";
        std::cout << "\n\n\t5. DELETE A STUDENT RECORD";
        std::cout << "\n\n\t6. EXIT";
        std::cout << "\n\n\tPlease Enter Your Choice (1-6): ";
        std::cin >> choice;

        switch (choice) {
        case '1':
            write_student();
            break;
        case '2':
            display_all();
            break;
        case '3':
            std::cout << "\n\nPlease enter the roll number: ";
            std::cin >> num;
            display_sp(num);
            break;
        case '4':
            std::cout << "\n\nPlease enter the roll number: ";
            std::cin >> num;
            modify_student(num);
            break;
        case '5':
            std::cout << "\n\nPlease enter the roll number: ";
            std::cin >> num;
            delete_student(num);
            break;
        case '6':
            std::cout << "\n\nExiting program. Thank you!\n";
            break;
        default:
            std::cout << "\aInvalid choice. Please try again.";
        }
        std::cin.ignore();
        std::cin.get();
    } while (choice != '6');

    return 0;
}
void write_student() {
    Student st;
    std::ofstream outFile;
    outFile.open("student.dat", std::ios::binary | std::ios::app);
    st.getData();
    outFile.write(reinterpret_cast<const char *>(&st), sizeof(Student));
    outFile.close();
    std::cout << "\n\nStudent record has been created successfully.";
}

void display_all() {
    Student st;
    std::ifstream inFile;
    inFile.open("student.dat", std::ios::binary);
    if (!inFile) {
        std::cout << "File could not be opened! No records to display.";
        return;
    }
    std::cout << "\n\n\n\t\t\tDISPLAYING ALL RECORDS\n\n";
    std::cout << "====================================================================\n";
    std::cout << "R.No       Name        P  C  M  E  CS  %age   Grade" << std::endl;
    std::cout << "====================================================================\n";
    while (inFile.read(reinterpret_cast<char *>(&st), sizeof(Student))) {
        st.showTabular();
    }
    inFile.close();
}

void display_sp(int n) {
    Student st;
    std::ifstream inFile;
    inFile.open("student.dat", std::ios::binary);
    if (!inFile) {
        std::cout << "File could not be opened! No records to display.";
        return;
    }
    bool flag = false;
    while (inFile.read(reinterpret_cast<char *>(&st), sizeof(Student))) {
        if (st.getRollNo() == n) {
            st.showData();
            flag = true;
        }
    }
    inFile.close();
    if (flag == false)
        std::cout << "\n\nRecord does not exist.";
}


void modify_student(int n) {
    bool found = false;
    Student st;
    std::fstream File;
    File.open("student.dat", std::ios::binary | std::ios::in | std::ios::out);
    if (!File) {
        std::cout << "File could not be opened! Cannot modify.";
        return;
    }
    while (!File.eof() && found == false) {
        File.read(reinterpret_cast<char *>(&st), sizeof(Student));
        if (st.getRollNo() == n) {
            st.showData();
            std::cout << "\n\nPlease enter the new details of student" << std::endl;
            st.getData();
            int pos = (-1) * static_cast<int>(sizeof(st));
            File.seekp(pos, std::ios::cur);
            File.write(reinterpret_cast<const char *>(&st), sizeof(Student));
            std::cout << "\n\n\t Record updated successfully.";
            found = true;
        }
    }
    File.close();
    if (found == false)
        std::cout << "\n\n Record not found.";
}

void delete_student(int n) {
    Student st;
    std::ifstream inFile;
    inFile.open("student.dat", std::ios::binary);
    if (!inFile) {
        std::cout << "File could not be opened! Cannot delete.";
        return;
    }
    std::ofstream outFile;
    outFile.open("Temp.dat", std::ios::out);
    inFile.seekg(0, std::ios::beg);
    while (inFile.read(reinterpret_cast<char *>(&st), sizeof(Student))) {
        if (st.getRollNo() != n) {
            outFile.write(reinterpret_cast<const char *>(&st), sizeof(Student));
        }
    }
    outFile.close();
    inFile.close();
    remove("student.dat");
    rename("Temp.dat", "student.dat");
    std::cout << "\n\n\tRecord deleted successfully.";
}