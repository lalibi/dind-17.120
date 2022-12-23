#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main() {
    int i, j, c1, c2;
    char word[] = "hello", phrase[MAX + 1];

    /* it is hel and not hello HeLLo HELLO hEllO hell */
    printf("Enter a phrase: ");
    gets(phrase);
    /* fgets(phrase, MAX + 1, stdin); */
    /* getline(phrase, MAX + 1, stdin); */

    /* Count how many times the word appears in the phrase */
    c1 = 0;
    for (i = 0; i < MAX; i++) {
        /* If the end of the phrase is reached, break */
        /* In case the phrase is less that MAX number of words */
        if (phrase[i] == '\0') break;

        /* Count how many characters match */
        c2 = 0;
        for (j = 0; j < strlen(word); j++) {
            /* Case insensitive comparison */
            if (tolower(phrase[i + j]) == tolower(word[j])) {
                c2++;
            } else {
                break;
            }
        }

        /* If all characters match, we found the word */
        if (c2 == strlen(word)) c1++;
    }

    printf("The word '%s' appears %d times in the phrase.\n", word, c1);

    return 0;
}
