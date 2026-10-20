#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int xor1 = 0;
    int xor2 = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor1 ^= arr[i];
    }

    // XOR all numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        xor2 ^= i;
    }

    // The missing number is the XOR of xor1 and xor2
    return xor1 ^ xor2;
}

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    // Array size is n because it contains numbers from 0 to n except one
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);

    return 0;
}   
