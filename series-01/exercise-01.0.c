#include <math.h>
#include <stdio.h>

int main() {
    int n, c, x, i, f;

    /*
     * Read a value for N,
     * but also perform checks */
    do {
        printf("Enter a positive number for N: ");
        scanf("%d", &n);

        /* Check if N is positive */
        if (n <= 0) printf("Wrong value! Try again!\n");

    } while (n <= 0); /* while the value is not positive, ask again */

    /* Alternatively:
    while (1) {
        printf("Enter a positive number for N: ");
        scanf("%d", &N);

        if (N > 0) break;
    }
    */

    c = 0; /* The number of prime numbers found */
    x = 2; /* The number to be checked */

    while (c < n) {
        f = 1;
        for (i = 2; i <= sqrt(x); i++) {
            /* x is divisible by i */
            if (x % i == 0) {
                f = 0;
                break;
            }
        }

        /* Prime number found */
        if (f == 1) {
            printf("%d\n", x);
            c++;
        }

        /* Proceed to the next number */
        x++;
    }

    return 0;
}
