#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    int age;
    float cgpa;
};
int main() {
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);
    printf("\nStudent Details\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name : %s\n", s.name);
    printf("Age : %d\n", s.age);
    printf("CGPA : %.2f\n", s.cgpa);
    return 0;
}