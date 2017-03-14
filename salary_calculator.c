#include <stdio.h>

int main(void)
{
    float salary;
    float hours;
    float rate;

    printf("Enter # hours worked (-1 to end): ");
    scanf("%f", &hours);

    while (hours != -1) {

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);

        if (hours <= 40) {
            salary = hours * rate;
        } else {
            salary = 40 * rate + (hours - 40) * 1.5 * rate;
        }

        printf("Salary is $%.2f\n\n", salary);

        printf("Enter # hours worked (-1 to end): ");
        scanf("%f", &hours);

    }

    return 0;
}