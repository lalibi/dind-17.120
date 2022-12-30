#include <stdio.h>
#include <string.h>

#define MAX   60
#define TRUE  1
#define FALSE 0

/* Function that replaces all occurrences of ch1 with ch2 in str */
int replace(char *str, char ch1, char ch2) {
    int i, c;

    c = 0; /* Number of characters replaced */
    for (i = 0; i < strlen(str); i++) {
        /* Check if the character is the one to replace */
        if (str[i] == ch1) {
            /* Replace the character */
            str[i] = ch2;
            /* Increment the counter */
            c++;
        }
    }

    return c;
}

/* Function that checks if str is a palindrome */
int is_palindrome(char *str) {
    int i, f, l;
    char ch1, ch2;

    l = strlen(str); /* Length of the string */
    f = TRUE;        /* Flag to indicate if the string is a palindrome */

    for (i = 0; i < l / 2; i++) {
        ch1 = str[i];         /* The first character is at position 0 */
        ch2 = str[l - i - 1]; /* The last character is at position l - 1 */

        if (ch1 != ch2) { /* If the characters are not the same */
            f = FALSE;    /* The string is not a palindrome */
            break;
        }
    }

    /* Return the flag */
    return f;
}

int main() {
    int i, c, f, choice;
    char ch1, ch2, str[MAX + 1];

    /* Read the string */
    printf("Enter a string: ");
    gets(str); /* scanf("%s", str); */

    do {
        /* Display the menu */
        printf("\n");
        printf("---------- MENU ----------\n");
        printf("1. Search for a characters\n");
        printf("2. Replace a character\n");
        printf("3. Check for palindrome\n");
        printf("4. Exit\n");
        printf("Enter your choice: "); /* Ask for the user's choice */
        scanf("%d", &choice);
        printf("--------------------------\n");

        while (getchar() != '\n') {} /* Clear the input buffer */

        /* Handle the user's choice */
        if (choice == 1) {
            printf("Enter a char to search for: ");
            ch1 = getchar(); /* scanf(" %c", &ch1); */

            /* Search for the character in the string */
            c = 0; /* Counter for the number of occurrences */
            for (i = 0; i < strlen(str); i++) {
                /* Check if the character is the one we are looking for */
                if (ch1 == str[i]) {
                    printf("Found at position %d\n", i);
                    c++;
                }
            }

            /* Display the result */
            if (c > 0) {
                printf("Found %d times\n", c);
            } else {
                printf("Not found!\n");
            }

        } else if (choice == 2) {
            printf("Enter a char to replace: ");
            ch1 = getchar(); /* scanf(" %c", &ch1); */

            while (getchar() != '\n') {} /* Clear the input buffer */

            printf("Enter a char to replace with: ");
            ch2 = getchar(); /* scanf(" %c", &ch2); */

            /* Replace the character, using the 'replace' function */
            c = replace(str, ch1, ch2);

            /* Display the result */
            if (c == 0) {
                printf("No character replaced!\n");
            }
        } else if (choice == 3) {
            /* Check if the string is a palindrome, using the 'is_palindrome' function */
            f = is_palindrome(str);

            /* Display the result */
            if (f == TRUE) {
                printf("A palindrome!\n");
            } else {
                printf("Not a palindrome...\n");
            }
        } else if (choice == 4) {
            printf("Bye!\n");
        } else {
            printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
