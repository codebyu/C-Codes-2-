#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0, arm = 0;
    printf("%d",1%10);
    printf("Enter the number to check: ");
    scanf("%d", &n);

    temp = n;
    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    // Calculate Armstrong sum
    while (temp > 0) {
        int r = temp % 10;
        arm += pow(r, digits);
        temp /= 10;
    }

    if (arm == n)
        printf("Armstrong No.\n");
    else
        printf("Not an Armstrong No.\n");

    return 0;
}