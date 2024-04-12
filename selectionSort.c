#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }

        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted elements are:: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    printf("Enter the size of the array:: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements one by one:: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    return 0;
}
 