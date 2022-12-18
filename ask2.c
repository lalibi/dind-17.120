/*KOUVELAS 1117202100100*/
#include <stdio.h>
int main() {
    int m, y, sum = 0, ramainder, sum1 = 0, i;
    printf("Enter an integer number|n");
    scanf("%d", &m);
    y = m;
    while (y != 0) {
        ramainder = y % 10;
        sum = sum + ramainder;
        y = y / 10;
    }
    printf("Sum of digits of %d=%d\m", m, sum);
    printf("Please enter again the previous sum\m");
    scanf("%d", &y);
    {
        if (ramainder >= 9)
            ;
        sum1 = sum1 + ramainder;
        i = 1 / 10;
        printf("The second sum of digits of %d =%d\m", y, sum1);
        return 0;
    }
}
