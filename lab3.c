#include <stdio.h>
#include <stdlib.h>

struct Student {
int roll;
char name[30];
float marks;
};

void displayAll(struct Student *ptr, int n)
{
int i;

printf("\n----- Student Details -----\n");

for (i = 0; i < n; i++) {
printf("\nRoll Number: %d\n", (ptr + i)->roll);
printf("Name: %s\n", (ptr + i)->name);
printf("Marks: %.2f\n", (ptr + i)->marks);
}
}

int main()
{
int n, i;
struct Student *students;
printf("Enter number of students: ");
if (scanf("%d", &n) != 1 || n <= 0) {
printf("Invalid number of students\n");
return 1;
}

students = malloc(n * sizeof(struct Student));

if (students == NULL) {
printf("Memory allocation failed\n");
return 1;
}

for (i = 0; i < n; i++) {

printf("\nEnter details of student %d\n", i + 1);

printf("Enter roll number: ");
if (scanf("%d", &(students + i)->roll) != 1)
goto input_error;

printf("Enter name: ");
if (scanf("%29s", (students + i)->name) != 1)
goto input_error;

printf("Enter marks: ");
if (scanf("%f", &(students + i)->marks) != 1)
goto input_error;
}

displayAll(students, n);

free(students);
return 0;

input_error:
printf("\nInvalid input!\n");
free(students);
return 1;
}



