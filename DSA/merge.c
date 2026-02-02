#include <stdio.h>
#include <stdlib.h>

// Function to merge two sorted portions of a single array into one sorted array
void merger (int *arr, int l, int m, int h)
{
        // Calculate the sizes of the two subarrays to be merged
        int left = m - l + 1;
        int right = h - m;
        // Create temporary arrays to hold the subarrays
        int left_arr[left];
        int right_arr[right];
        int i, j, k;
        k=l; //Preserving the starting index of actual array received
       // Copy data to temporary arrays left_arr[] and right_arr[]
        for (j=0; j<left; j++)
        {
                left_arr[j] = arr[l++];
        }
        for (i=0; i<right; i++)
        {
                right_arr[i] = arr[l++];
        }
        // Merge the temporary arrays back into arr[l..h]
        i = j = 0;
        while  ( (j<left) && (i<right) )
        {
                if (left_arr[j] <= right_arr[i])
                {
                        arr[k++] = left_arr[j++];
                }
                else
                {
                         arr[k++] = right_arr[i++];
                }
        }
        // Copy the remaining elements of left_arr[], if any
        while (j<left)
        {
                arr[k++] = left_arr[j++];
        }

        // Copy the remaining elements of left_arr[], if any
        while (i<right)
        {
                arr[k++] = right_arr[i++];
        }

}

// Function to recursively divide the array into halves and merge them
void mergeSort(int *arr, int l, int h)
{
        // Base case: If l is equal to or greater than h, return
        if (l>=h)
                return;
        int m = (l+h)/2;

        // Recursively sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, h);

        // Merge the sorted halves
        merger(arr, l, m, h);
}

int main ()
{
        int s; //variable to hold size of Array
        printf("Enter size of Array -> ");
        scanf("%d", &s);
        int arr[s]; //Declaring Array
        //Enter Array elements
        for (int i=0; i<s; i++)
        {
                printf("Enter Value -> ");
                scanf("%d", &arr[i]);
        }

        // Display original array
        printf("\nOriginal Array ->\n");
        for(int i=0; i<s; i++)
        {
                printf("Value-> %d\t", arr[i]);
        }
        printf("\n");

        // Perform merge sort
        mergeSort(arr, 0, s-1);

        // Display sorted array
        printf("\nArray after Sorting ->\n");
        for (int i=0; i<s; i++)
        {
                printf("Value-> %d\t", arr[i]);
        }
        printf("\n");
}
