#include <stdio.h>

int main() {
    int x, sum;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    /* while x has more than one digits */
    while (x / 10 > 0) { /* x >= 10 */
        /* Initialize the sum */
        sum = 0;
        /* while that are more digits in x */
        while (x > 0) {
            /* Get the last digit */
            int d = x % 10;
            /* Add the last digit to the sum */
            sum = sum + d; /* sum += d */
            /* Get rid of the last digit, to continue */
            x = x / 10; /* x /= 10 */
        }

        x = sum;
    }

    printf("%d", x);

    return 0;
}
