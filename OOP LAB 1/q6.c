#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
int main() {
    struct Distance d1, d2, total;
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);
    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);
    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;
    printf("\nTotal Distance\n");
    printf("Feet: %d\n", total.feet);
    printf("Inches: %d\n", total.inches);
    return 0;
}