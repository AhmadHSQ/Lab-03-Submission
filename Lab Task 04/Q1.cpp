#include <stdio.h>
int main() {
	
    int daily_water_usage;
    
    printf("\nEnter daily water usage in liters: ");
    scanf("%d", &daily_water_usage);
    
    if (daily_water_usage <= 100)
        printf("\nEfficient Usage");
    else
        printf("\nHigh Usage Detected");
    return 0;
}

