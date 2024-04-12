#include <stdio.h>

void findDuplicate(int arr[], int size)
{
    printf("Duplicate elements are: ");
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break; // To avoid printing the same element multiple times
            }
        }
    }
    printf("\n");
}

int main()
{
    printf("Enter the size of an array: ");
    int size;
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array one by one:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    findDuplicate(arr, size);

    return 0;
}
