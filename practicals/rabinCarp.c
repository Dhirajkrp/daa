#include <stdio.h>
#include <string.h>
#define d 256

void search(char *pat, char *text, int q) {
    int M = strlen(pat);
    int N = strlen(text);
    int i, j;

    for (i = 0; i <= N - M; i++) {
        int p = 0;
        int t = 0;
        
        for (j = 0; j < M; j++) {
            p = (d * p + pat[j]) % q;
            t = (d * t + text[i + j]) % q;
        }

        if (p == t) {
            for (j = 0; j < M; j++) {
                if (text[i + j] != pat[j])
                    break;
            }

            if (j == M) {
                printf("Pattern found at index %d\n", i);
            }
            else{
                printf("Pattern not found!");
            }
        }
    }
}

int main() {
    char text[100], pat[100];
    int q = 101;

    printf("Enter the text: ");
    fgets(text, 100, stdin);
    printf("Enter the pattern: ");
    fgets(pat, 100, stdin);

    // Remove newline characters from input
    text[strcspn(text, "\n")] = '\0';
    pat[strcspn(pat, "\n")] = '\0';

    search(pat, text, q);

    return 0;
}
