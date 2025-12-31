#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    fptr = fopen("StudentsData.txt", "w");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int n;
    printf("Number of Students to Store: ");
    scanf("%d", &n);
    getchar(); // Consume the newline left by scanf

    // Using %-20s creates a column of width 20, left aligned
    fprintf(fptr, "%-20s | %-8s | %-6s | %-10s |\n", "Name", "Roll No", "CGPA", "Course");
    fprintf(fptr, "---------------------|----------|--------|------------|\n");

    char name[100];
    int roll;
    float cgpa;
    char course[100];

    for (int i = 1; i <= n; i++) {
        printf("\nEnter Student %d Details\n", i);

        printf("Name: ");
        fgets(name, 100, stdin);
        name[strcspn(name, "\n")] = 0; // Standard way to remove newline from fgets

        printf("Roll No.: ");
        scanf("%d", &roll);

        printf("CGPA: ");
        scanf("%f", &cgpa);
        getchar(); // Consume newline after float input

        printf("Course: ");
        fgets(course, 100, stdin);
        course[strcspn(course, "\n")] = 0; // Remove newline

        // WRITING TO FILE
        // %-20s : Left align name in 20 chars
        // %-8d  : Left align roll in 8 chars
        // %-6.2f: Left align float in 6 chars with 2 decimal precision
        fprintf(fptr, "%-20s | %-8d | %-6.2f | %-10s |\n", name, roll, cgpa, course);
    }

    fclose(fptr);
    printf("\nData saved successfully to StudentsData.txt\n");

    return 0;
}