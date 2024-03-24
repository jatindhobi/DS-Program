#include <stdio.h>
void main()
{
    int arr[100], size, temp;
    int i, j;

    printf("Enter size of an array:");
    scanf("%d", &size);
    printf("Enter element:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
