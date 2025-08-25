#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    // Pointer to the 2nd element (index 1)
    int *ptr1 = &arr[1];

    // Pointer to the 6th element (index 5)
    int *ptr2 = &arr[5];

    // Subtract the pointers
    long difference = ptr2 - ptr1;

    printf("ptr1 points to value: %d\n", *ptr1);
    printf("ptr2 points to value: %d\n", *ptr2);
    printf("The difference is: %ld elements\n", difference);

    return 0;
}