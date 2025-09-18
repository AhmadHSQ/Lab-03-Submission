#include <stdio.h>

int main() {
    float mark1, mark2, mark3, mark4, mark5;
    float total_marks, percentage, cgpa;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);

    total_marks = mark1 + mark2 + mark3 + mark4 + mark5;

    percentage = (total_marks / 500) * 100;

    cgpa = (percentage / 100) * 4;

    printf("\n-------------------------------\n");
    printf("\tSTUDENT RESULT        \n");
    printf("-------------------------------\n\n");

    printf("Marks: %.1f, %.1f, %.1f, %.1f, %.1f\n", mark1, mark2, mark3, mark4, mark5);
    printf("Total: %.1f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("CGPA: %.2f / 4.00\n", cgpa);

    return 0;
}
