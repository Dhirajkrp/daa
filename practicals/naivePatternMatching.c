#include <stdio.h>
#include <string.h>

int search(char *pat, char *text) {
    int M = strlen(pat);
    int N = strlen(text);
    int i, j;

    for (i = 0; i <= N - M; i++) {
        for (j = 0; j < M; j++) {
            if (text[i + j] != pat[j])
                break;
        }

        if (j == M)
            return i;
    }
    return -1; 
}

int main() {
    char text[100], pat[100];
    int index;

    printf("\nEnter the text: ");
    fgets(text, 100, stdin);
    printf("\nEnter the pattern: ");
    fgets(pat, 100, stdin);

    // Remove newline characters from input
    text[strcspn(text, "\n")] = '\0';
    pat[strcspn(pat, "\n")] = '\0';

    index = search(pat, text);

    if (index >= 0) {
        printf("Pattern found at index: %d\n", index);
    } else {
        printf("Pattern not found\n");
    }

    return 0;
}
