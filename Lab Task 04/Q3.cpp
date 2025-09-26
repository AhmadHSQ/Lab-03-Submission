#include <stdio.h>
int main() {
	
    int monthly_water_usage;
    
    printf("Enter monthly water usage in liters: ");
    scanf("%d", &monthly_water_usage);
    
    if (monthly_water_usage <= 3000)
        printf("No Fine");
    else if (monthly_water_usage <= 5000)
        printf("Fine = 200 PKR");
    else if (monthly_water_usage <= 7000)
        printf("Fine = 500 PKR");
    else
        printf("Fine = 1000 PKR + Water Supply Restricted");
        
    return 0;
}

