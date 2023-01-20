#include <stdio.h>
#include <stdlib.h>

#define NOS 10 /* Number of students */
#define NOG 5  /* Number of grades */

/* Define the student struct, using a typedef */
/* This is equivalent to: struct student { ... } */
typedef struct {
    char name[50];
    int am;
    int grades[NOG];
    float average;
} student;

/* Print the students, using a function */
void print_students(student s[]) {
    int i;

    printf("\n");
    printf("|Name      |Avg  |\n");
    printf("------------------\n");
    for (i = 0; i < NOS; i++) {
        printf("|%-10s|%-5.2f|\n", s[i].name, s[i].average);
        printf("------------------\n");
    }
}

/* swap two students, using pointers */
void swap_students(student *s1, student *s2) {
    student temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    int i, j;
    student students[NOS];

    /* Read the data */
    for (i = 0; i < NOS; i++) {
        printf("Enter name: ");
        /* No need for & here, because the name is an array (pointer) */
        scanf("%s", students[i].name);

        printf("Enter AM: ");
        scanf("%d", &students[i].am);

        printf("Enter grades: ");

        /* Read the grades */
        for (j = 0; j < NOG; j++) {
            scanf("%d", &students[i].grades[j]);
        }
    }

    /* Calculate the average for each student */
    for (i = 0; i < NOS; i++) {
        float sum = 0;
        for (j = 0; j < NOG; j++) {
            sum += students[i].grades[j];
        }
        students[i].average = sum / NOG;
    }

    print_students(students);

    /* Sort the students by average, using bubble sort */
    for (i = 0; i < NOS - 1; i++) {
        for (j = NOS - 1; j > i; j--) {
            if (students[j - 1].average < students[j].average) {
                swap_students(&students[j - 1], &students[j]);
            }
        }
    }

    print_students(students);

    return 0;
}
