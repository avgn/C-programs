#include <stdio.h>

int main(void)
{
    float principal;
    float rate;
    float interest;
    int days;

    printf("Enter loan principal: ");
    scanf("%f", &principal);

    while (principal != -1) {

        printf("Enter interest rate: ");
        scanf("%f", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365;

        printf("The interest charge is $%.2f\n\n", interest);

        printf("Enter loan principal: ");
        scanf("%f", &principal);        

    }

    return 0;

}
