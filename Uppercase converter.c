// C program to convert all lower case characters of a file
// into Upper Case
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// utility function to print file
void readFile(FILE* fptr)
{
    char ch = fgetc(fptr);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
}

int main()
{
    // initializing the file pointer
    FILE* fptr;

    // test string
    char str[500]
        = "An extensive classroom "
          "programme\nby GeeksforGeeks to build and "
          "enhance\nData Structures and Algorithm concepts";

    // name of the file as sample.txt
    char file[50] = { "gfg.txt" };
    char ch;

    // opening the file in read write mode
    fptr = fopen(file, "w");

    // printing data to the file
    fprintf(fptr, "%s", str);
    rewind(fptr);

    // printing initial file
    printf("INITIAL FILE DATA:\n");
    readFile(fptr);
    rewind(fptr);

    ch = fgetc(fptr);
    int i = 0;
    // converting into upper case
    while (ch != EOF) {

        // converting char to upper case
        str[i++] = toupper(ch);
        ch = fgetc(fptr);
    }
    rewind(fptr);

    // printing upper case
    fprintf(fptr, "%s", str);
    rewind(fptr);

    printf("\nFINAL FILE DATA:\n");
    readFile(fptr);

    // closing the file
    fclose(fptr);

    return 0;
}
