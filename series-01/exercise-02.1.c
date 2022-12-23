#include <stdio.h>

int sum_digits(int x) {
    int sum;

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

    return sum;
}

int main() {
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    /* while x has more than one digits */
    while (x / 10 > 0) { /* x >= 10 */
        x = sum_digits(x);
    }

    printf("%d", x);

    return 0;
}
