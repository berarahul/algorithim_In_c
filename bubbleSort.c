#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        int swapped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (swapped == 0)
        {
            break;
        }

        printf("Sorted array is:: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

}

int main()
{
    printf("Enter the size of an array:: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array Elements:: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, n);

    return 0;
}
