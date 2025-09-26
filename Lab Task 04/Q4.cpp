#include <stdio.h>
int main() {
	
    int code;
    
    printf("Enter category code (1-4): ");
    scanf("%d", &code);
    
    if (code == 1)
        printf("Low Usage Household");
    else if (code == 2)
        printf("Average Household");
    else if (code == 3)
        printf("High Usage Household");
    else if (code == 4)
        printf("Excessive Usage Household");
    else
        printf("Invalid Category Code");
        
    return 0;
}

