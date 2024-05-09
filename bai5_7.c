#include <stdio.h>
#include <string.h>

void normalizeTitle(char *title) {
    int i, j;
    int length = strlen(title);

    // Remove leading spaces
    while (title[0] == ' ') {
        for (i = 0; i < length; i++) {
            title[i] = title[i + 1];
        }
        length--;
    }

    // Remove trailing spaces
    while (title[length - 1] == ' ') {
        title[length - 1] = '\0';
        length--;
    }

    // Remove extra spaces between words
    for (i = 0; i < length; i++) {
        if (title[i] == ' ' && title[i + 1] == ' ') {
            for (j = i; j < length; j++) {
                title[j] = title[j + 1];
            }
            length--;
            i--;
        }
    }
}

int main() {
    char title[100];

    fgets(title, sizeof(title), stdin);

    normalizeTitle(title);

    printf("%s\n", title);

    return 0;
}