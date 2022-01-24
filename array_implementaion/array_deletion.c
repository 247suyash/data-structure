#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
        arr[i] = arr[i + 1]; // 50 ki jgha put 60
        printf("%d", arr[i]);
        printf("\n");

    }
    return 1;
}

void main()
{
    int arr[100] = {10, 20, 30, 50, 60};
    int size = 5, index = 3;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    // return 0;
}