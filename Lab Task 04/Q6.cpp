#include <stdio.h>
int main() {
	
    int monthly_water_usage, days;
    
    printf("Enter monthly water usage in liters: ");
    scanf("%d", &monthly_water_usage);
    
    printf("Enter number of days water was saved: ");
    scanf("%d", &days);
    
    if (monthly_water_usage < 2500 && days > 10)
        printf("Bonus: 300 PKR Discount");
    else
        printf("No Bonus");
        
    return 0;
}

