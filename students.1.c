#include <stdio.h>
#include <stdlib.h>

#define NOS 10 /* Number of students */
#define NOG 5  /* Number of grades */

struct student {
    char name[50];
    int am;
    int grades[NOG];
    float average;
};

int main() {
    int i, j;
    struct student students[NOS];

    /* Read the data */
    for (i = 0; i < NOS; i++) {
        printf("Enter name: ");
        /* No need for & here, because the name is an array (pointer) */
        scanf("%s", students[i].name);

        printf("Enter AM: ");
        scanf("%d", &students[i].am);

        printf("Enter grades: ");

        /* Read the grades */
        scanf("%d", &students[i].grades[0]);
        scanf("%d", &students[i].grades[1]);
        scanf("%d", &students[i].grades[2]);
        scanf("%d", &students[i].grades[3]);
        scanf("%d", &students[i].grades[4]);
    }

    /* Calculate the average for each student */
    for (i = 0; i < NOS; i++) {
        float sum = 0;
        for (j = 0; j < NOG; j++) {
            sum += students[i].grades[j];
        }
        students[i].average = sum / NOG;
    }

    /* Print the students */
    printf("\n");
    printf("|Name\t|Avg\t|\n");
    printf("-----------------\n");
    for (i = 0; i < NOS; i++) {
        printf("|%s\t|%.2f\t|\n", students[i].name, students[i].average);
        printf("-----------------\n");
    }

    /* Sort the students by average, using bubble sort */
    for (i = 0; i < NOS - 1; i++) {
        for (j = NOS - 1; j > i; j--) {
            if (students[j - 1].average < students[j].average) {
                struct student temp;
                temp = students[j - 1];
                students[j - 1] = students[j];
                students[j] = temp;
            }
        }
    }

    /* Print the students */
    printf("\n");
    printf("|Name\t|Avg\t|\n");
    printf("-----------------\n");
    for (i = 0; i < NOS; i++) {
        printf("|%s\t|%.2f\t|\n", students[i].name, students[i].average);
        printf("-----------------\n");
    }

    return 0;
}
