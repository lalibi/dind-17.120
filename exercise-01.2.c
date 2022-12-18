#include <math.h>
#include <stdio.h>

int is_prime(int x) {
    int i;

    if (x == 1) return 0;

    if (x % 2 == 0) return 0;

    for (i = 3; i <= sqrt(x); i += 2) {
        /* x is divisible by i */
        if (x % i == 0) return 0;
    }

    return 1;
}

int main() {
    int n, c, x;

    /*
     * Read a value for N,
     * but also perform checks  */
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
        /* Prime number found */
        if (is_prime(x) == 1) {
            printf("%d\n", x);
            c++;
        }

        /* Proceed to the next number */
        x++;
    }

    return 0;
}
