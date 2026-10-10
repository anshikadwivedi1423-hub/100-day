#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    int nums[n], answer[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        answer[i] = 1;

        for (j = 0; j < n; j++) {
            if (i != j) {
                answer[i] *= nums[j];
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
