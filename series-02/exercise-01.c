#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {
    int i, arr[N], c1, c2, max;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    /* Example input
    -290 -12 -1 0 3 5 6 6 178 290
    19 12 10 0 -3 -5 -6 -6 -178 -290
    19 12 10 0 12 -5 -6 -6 -178 -29
    */

    c1 = 0;
    c2 = 0;
    max = abs(arr[0]);

    /* Must start from 1, because we compare
       the current item with the previous one */
    for (i = 1; i < N; i++) {
        /* Count how many items are smaller than the previous one */
        if (arr[i] < arr[i - 1]) {
            c1 = c1 + 1;
        }
        /* Count how many items are bigger than the previous one */
        if (arr[i] > arr[i - 1]) {
            c2 = c2 + 1;
        }

        /* Find the max absolute value */
        if (max < abs(arr[i])) {
            max = abs(arr[i]);
        }
    }

    if (c1 == 0 && c2 == 0) {
        printf("The array is sorted in ascending and descending order.\n");
    } else if (c1 == 0) {
        printf("The array is sorted in ascending order.\n");
    } else if (c2 == 0) {
        printf("The array is sorted in descending order.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    /* Print the max absolute value */
    printf("The max absolute value is %d.\n", max);

    return 0;
}
