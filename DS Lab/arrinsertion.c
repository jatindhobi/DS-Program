#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
}

int indinsertion(int arr[], int size, int capacity, int element, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

void main()
{
    int arr[100] = {23, 45, 67, 87, 33};
    int size = 5, element = 50;
    int index = 0;
    display(arr, size);
    indinsertion(arr, size, 100, element, index);
    size += 1;
    display(arr, size);
}