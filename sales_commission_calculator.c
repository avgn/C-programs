#include <stdio.h>

int main(void)
{
    int baseSalary = 200;
    float commissionPercent = 0.09;
    float sales;
    float commissions;
    float salary;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while (sales != -1) {
        commissions = commissionPercent * sales;
        salary = baseSalary + commissions;
        printf("Salary is: $%.2f\n\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);

    }

    return 0;

}


/*
initialize sales
initialize commissions
initialize salary
set commission percent to nine
set base salary to 200

input sales
while sales is different from -1
    compute commissions = commission percent * sales
    compute salary = base salary + commissions
    print salary

    input sales

*/