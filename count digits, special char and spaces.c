#include <stdio.h>

int main()
{
    char str[100];
    int i, digits = 0, spaces = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (str[i] == ' ')
            spaces++;
        else if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                   (str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= '0' && str[i] <= '9') ||
                   str[i] == ' '))
            special++;
    }

    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special characters = %d\n", special);

    return 0;
}
