#include <stdio.h>

int main()
{
    int arr[100], n, element;
    int i, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    position = 0;

    while (position < n && arr[position] < element)
    {
        position++;
    }

    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
