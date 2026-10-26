#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open the existing file in append mode
    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take a new line of text from the user
    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
