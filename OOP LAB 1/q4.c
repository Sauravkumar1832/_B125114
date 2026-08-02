#include <stdio.h>
struct Product {
    int productId;
    char productName[50];
    float price;
    int quantity;
};
int main() {
    struct Product p;
    float totalCost;
    printf("Enter Product ID: ");
    scanf("%d", &p.productId);
    printf("Enter Product Name: ");
    scanf("%s", p.productName);
    printf("Enter Price: ");
    scanf("%f", &p.price);
    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);
    totalCost = p.price * p.quantity;
    printf("\nProduct Details\n");
    printf("Product ID : %d\n", p.productId);
    printf("Product Name : %s\n", p.productName);
    printf("Price : %.2f\n", p.price);
    printf("Quantity : %d\n", p.quantity);
    printf("Total Cost: %.2f\n", totalCost);

    return 0;
}