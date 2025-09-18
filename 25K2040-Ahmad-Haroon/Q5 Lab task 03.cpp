#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal_amount, annual_interest_rate, monthly_interest_rate, emi;
    int loan_duration_years, loan_duration_months;

    printf("Enter Loan Amount: ");
    scanf("%f", &principal_amount);

    printf("Enter Annual Interest Rate (%%): ");
    scanf("%f", &annual_interest_rate);

    printf("Enter Duration (years): ");
    scanf("%d", &loan_duration_years);

    monthly_interest_rate = (annual_interest_rate / (12*100));

    loan_duration_months = loan_duration_years * 12;

    emi = principal_amount * monthly_interest_rate * pow(1 + monthly_interest_rate, loan_duration_months) / (pow(1 + monthly_interest_rate, loan_duration_months) - 1);

    printf("\n--------------------------------\n");
    printf("\tLOAN CALCULATION       \n");
    printf("--------------------------------\n\n");

    printf("Loan Amount: %.2f\n", principal_amount);
    printf("Duration: %d years (%d months)\n", loan_duration_years, loan_duration_months);
    printf("Interest Rate: %.2f%% per year\n", annual_interest_rate);
    printf("Monthly EMI: %.2f", emi);


    return 0;
}
