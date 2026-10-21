#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input array size
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Invalid size. Must be > 1.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    // Find repeated element in one iteration
    // Assuming elements are non-negative and within a reasonable range
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Create a visited array
    char *visited = calloc(maxVal + 1, sizeof(char));
    if (!visited) {
        printf("Memory allocation failed.\n");
        free(arr);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (visited[arr[i]]) {
            printf("Repeated element: %d\n", arr[i]);
            free(arr);
            free(visited);
            return 0; // Found in one pass
        }
        visited[arr[i]] = 1;
    }

    // If no repeated element found (should not happen per problem statement)
    printf("No repeated element found.\n");

    free(arr);
    free(visited);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input array size
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Invalid size. Must be > 1.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    // Find repeated element in one iteration
    // Assuming elements are non-negative and within a reasonable range
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Create a visited array
    char *visited = calloc(maxVal + 1, sizeof(char));
    if (!visited) {
        printf("Memory allocation failed.\n");
        free(arr);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (visited[arr[i]]) {
            printf("Repeated element: %d\n", arr[i]);
            free(arr);
            free(visited);
            return 0; // Found in one pass
        }
        visited[arr[i]] = 1;
    }

    // If no repeated element found (should not happen per problem statement)
    printf("No repeated element found.\n");

    free(arr);
    free(visited);
    return 0;
}
