#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks for Physics (out of 100): ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks for Math (out of 100): ");
    scanf("%f", &mathMarks);

    printf("Enter Marks for Chemistry (out of 100): ");
    scanf("%f", &chemistryMarks);

    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;

    printf("\nResult\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}