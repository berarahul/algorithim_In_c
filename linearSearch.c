#include <stdio.h>

int linearsearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    printf("Enter the Size of the array:: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Array Elements One By One:: \n");
    for (int i = 0; i < n; i++)
    {

        printf("Elements %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the Search Element::\n");
    int target;
    scanf("%d", &target);
    int result = linearsearch(arr, n, target);
    if (result != -1)
    {
        printf("Element %d found at index %d\n", target, result);
    }
    else
    {

        printf("Element %d not found", target);
    }
    return 0;
}