#include <stdio.h>
#include <math.h>

int main(void)
{
    double amount;
    double principal;
    double rate;
    int years;

    printf("Enter capital invested (-1 to end): ");
    scanf("%lf", &principal);

    while (principal != -1) {
        
        printf("Enter annual interest rate: ");
        scanf("%lf", &rate);
        printf("Enter number of years: ");
        scanf("%d", &years);

        printf("%4s%21s\n", "Year", "Amount on deposit");

        for (int year = 1; year <= years; year++) {

            amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }

        printf("\n");

        printf("Enter capital invested (-1 to end): ");
        scanf("%lf", &principal);

    }

    return 0;
}