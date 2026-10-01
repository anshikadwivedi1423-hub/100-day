#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int total = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++)
    {
        int rightSum = total - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            pivot = i;
            break;   
        }

        leftSum += arr[i];
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}
