#include <stdio.h>

int main() {
    float distance, fuel_used, fuel_price_per_liter;
    float efficiency, total_fuel_cost;


    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (liters): ");
    scanf("%f", &fuel_used);

    printf("Enter fuel price per liter: ");
    scanf("%f", &fuel_price_per_liter);

    efficiency = distance / fuel_used;

    total_fuel_cost = fuel_used * fuel_price_per_liter;

    printf("\n-------------------------------\n");
    printf("\tFUEL REPORT\n");
    printf("-------------------------------\n\n");
    
    printf("Distance: %.2f km\n", distance);
    printf("Fuel Used: %.2f L\n", fuel_used);
    printf("Efficiency: %.2f km/L\n", efficiency);
    printf("Total Cost: %.2f PKR\n", total_fuel_cost);

    return 0;
}
