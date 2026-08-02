#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    int rollNo;
    char name[50];
    struct Date dob; 
};
int main() {
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    getchar(); 
    printf("Enter Full Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nStudent Information\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s", s.name);
    printf("Date of Birth : %02d/%02d/%04d\n",
           s.dob.day, s.dob.month, s.dob.year);

    return 0;
}