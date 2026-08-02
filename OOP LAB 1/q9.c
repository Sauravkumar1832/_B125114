#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float cgpa;
};
int main() {
    struct Student s[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }
    printf("\nStudents with CGPA >= 8.0\n");
    for(i = 0; i < 5; i++) {
        if(s[i].cgpa >= 8.0) {
            printf("\nRoll Number : %d\n", s[i].rollNo);
            printf("Name : %s\n", s[i].name);
            printf("CGPA: %.2f\n", s[i].cgpa);
        }
    }

    return 0;
}