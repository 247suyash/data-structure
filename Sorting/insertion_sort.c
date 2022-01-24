#include <stdio.h>
// A function to implement bubble sort
void insertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n - 1; i++)
    {
        arr[i] = key;
        j = i - 1;
        while (j>=0  && arr[i] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Size of n: %d \n", n);

    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}