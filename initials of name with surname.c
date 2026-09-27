#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Output: ");

    // Print initials of first and middle names
    for (i = 0; name[i] != '\0'; i++)
    {
        if (i == 0)
        {
            printf("%c.", name[i]);
        }
        else if (name[i] == ' ' && name[i + 1] != '\0')
        {
            // Check if this is not the space before the surname
            int j = i + 1;

            while (name[j] != '\0' && name[j] != ' ')
                j++;

            if (name[j] == ' ' || name[j] == '\0')
            {
                if (name[j] == '\0')
                    break;
                printf("%c.", name[i + 1]);
            }
        }
    }

    // Find and print the surname
    i = 0;
    while (name[i] != '\0')
        i++;

    // Move backward to find the last space
    i--;
    while (i >= 0 && name[i] != ' ')
        i--;

    printf(" %s", &name[i + 1]);

    return 0;
}
