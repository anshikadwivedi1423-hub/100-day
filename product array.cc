#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int product = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = product;
        product = product * nums[i];
    }

    product = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * product;
        product = product * nums[i];
    }

    printf("Answer array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1)
            printf(", ");
    }

    return 0;
}
