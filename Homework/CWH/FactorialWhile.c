#include<stdio.h>
int main(){
   // Pseudocode
string correct_password = "password123";
string user_input = "";

while (user_input != correct_password) {
    print("Please enter the password: ");
    user_input = get_user_input();
}

print("Access granted!");
}
