#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float cMarks;
    float mathMarks;
    float phyMarks;
    float total;
    float average;
};
int main() {
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks in C: ");
    scanf("%f", &s.cMarks);
    printf("Enter Marks in Mathematics: ");
    scanf("%f", &s.mathMarks);
    printf("Enter Marks in Physics: ");
    scanf("%f", &s.phyMarks);
    s.total = s.cMarks + s.mathMarks + s.phyMarks;
    s.average = s.total / 3;
    printf("\nStudent Details\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks in C : %.2f\n", s.cMarks);
    printf("Marks in Mathematics : %.2f\n", s.mathMarks);
    printf("Marks in Physics: %.2f\n", s.phyMarks);
    printf("Total Marks : %.2f\n", s.total);
    printf("Average: %.2f\n", s.average);

    return 0;
}