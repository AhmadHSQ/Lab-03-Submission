#include <stdio.h>
int main() {
	
    int monthly_usage, family, category, days;

    printf("Enter monthly water usage in liters: ");
    scanf("%d", &monthly_usage);
    
    printf("Enter family size: ");
    scanf("%d", &family);
    
    printf("Enter category code (1-4): ");
    scanf("%d", &category);
    
    printf("Enter number of days water was saved: ");
    scanf("%d", &days);

    switch (category) {
        case 1:
            printf("Category: Low Usage Household\n");
            break;
        case 2:
            printf("Category: Average Household\n");
            break;
        case 3:
            printf("Category: High Usage Household\n");
            break;
        case 4:
            printf("Category: Excessive Usage Household\n");
            break;
        default:
            printf("Invalid Category CoCode\n");
    }
    
    
    if (monthly_usage <= 3000)
        printf("Fine: No Fine\n");
    else if (monthly_usage <= 5000)
        printf("Fine: 200 PKR\n");
    else if (monthly_usage <= 7000)
        printf("Fine: 500 PKR\n");
    else
        printf("Fine: 1000 PKR + Water Supply Restricted\n");

    if (monthly_usage < 2500 && days > 10)
        printf("Bonus: 300 PKR Discount\n");
    else
        printf("No Bonus\n");

    return 0;
}

