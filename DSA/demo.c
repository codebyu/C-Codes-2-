#include <stdio.h>
void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivot = a[low];
        int i = low;
        int j = high;

        while (i < j) {
            while (a[i] <= pivot && i < high) i++;
            while (a[j] > pivot) j--;

            if (i < j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        // swap pivot with a[j]
        int temp = a[low];
        a[low] = a[j];
        a[j] = temp;

        // recursive calls
        quickSort(a, low, j - 1);
        quickSort(a, j + 1, high);
    }
}

int main() {
    int a[7];
    int i;

    printf("Enter 7 elements:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, 6);

    printf("Sorted array:\n");
    for (i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
