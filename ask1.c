/*KOUVELAS 1117202100100*/
#include <stdio.h>
int main() {
    int j, n;
    for (j = 2; j <= n / 2; j++)
        ;
    {
        printf("Enter your wanted number: \n");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Enter a positive number:");
            scanf("%d", &n);
        }
        if (n % j == 1) {
            printf("The number is not prime number");
        } else
            printf("The number is a prime number");
    }
    return 0;
}
