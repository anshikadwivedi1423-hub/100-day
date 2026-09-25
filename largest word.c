#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char word[50], largest[50];
    int i = 0, j = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0')
    {
        if (sentence[i] != ' ' && sentence[i] != '\n')
        {
            word[j] = sentence[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if (strlen(word) > maxLength)
            {
                maxLength = strlen(word);
                strcpy(largest, word);
            }

            j = 0;
        }

        i++;
    }

    printf("Largest word: %s", largest);

    return 0;
}
