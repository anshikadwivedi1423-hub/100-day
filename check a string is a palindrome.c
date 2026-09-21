#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    i = 0;
    j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if (flag == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}
