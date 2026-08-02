#include <stdio.h>
struct Employee {
    int empId;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp[5];
    int i, maxIndex = 0;
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    for(i = 1; i < 5; i++) {
        if(emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }
    printf("\nEmployee with Highest Salary\n");
    printf("Employee ID : %d\n", emp[maxIndex].empId);
    printf("Name : %s\n", emp[maxIndex].name);
    printf("Salary : %.2f\n", emp[maxIndex].salary);
    return 0;
}