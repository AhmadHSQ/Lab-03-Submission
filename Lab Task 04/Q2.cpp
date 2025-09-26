#include <stdio.h>
int main() {
	
    int monthly_water_usage;
    
    printf("Enter monthly water usage in liters: ");
    scanf("%d", &monthly_water_usage);
    
    if (monthly_water_usage <= 3000)
        printf("Bill = 500 PKR");
    else
        printf("Bill = 1000 PKR");
        
        
    return 0;
}

