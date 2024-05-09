#include <stdio.h>
#include <string.h>

void countCharacters(char *str1, char *str2)
{
    int count[256] = {0}; // Initialize an array to store the count of each character
    int i;

    // Count the characters in the first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        count[str1[i]]++;
    }

    // Count the characters in the second string
    for (i = 0; str2[i] != '\0'; i++)
    {
        count[str2[i]]++;
    }

    // Print the unique characters and their counts
    for (i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("%c", i);
        }
    }
    printf("\n");
    for (i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("%d\n", count[i]);
        }
    }
}

int main()
{
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character

    countCharacters(str1, str2);

    return 0;
}