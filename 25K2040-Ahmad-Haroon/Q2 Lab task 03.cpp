#include <stdio.h>

int main() {
    float eggs_price, bread_price, butter_price;
    float subtotal, tax, final_total;


    printf("Enter price of eggs: ");
    scanf("%f", &eggs_price);

    printf("Enter price of bread: ");
    scanf("%f", &bread_price);

    printf("Enter price of butter: ");
    scanf("%f", &butter_price);

    subtotal = eggs_price + bread_price + butter_price;

    tax = subtotal * 0.17;

    final_total = subtotal + tax;

    printf("\n--------------------------------\n");
    printf("\t SHOP RECEIPT\n");
    printf("--------------------------------\n\n");
    printf("Eggs: %.2f\n", eggs_price);
    printf("Bread: %.2f\n", bread_price);
    printf("Butter: %.2f\n\n", butter_price);
	printf("--------------------------------\n");

    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax (17%%): %.2f\n", tax);

    printf("--------------------------------\n");
    printf("Grand Total: %.2f", final_total);

    return 0;
}
