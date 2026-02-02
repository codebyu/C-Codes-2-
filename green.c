#include <stdio.h>

int main() {
    // ANSI escape: \033[0;32m = green text, \033[0m = reset color
    printf("\033[0;32mHello, Darshan! This is green output from your C program.\033[0m\n");
    return 0;
}
