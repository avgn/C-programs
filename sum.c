#include <stdio.h>

int main(void)
{
    int integer1;
    int integer2;
    int sum;

    printf("Enter first integer: ");
    scanf("%d", &integer1);

    printf("Enter second integer: ");
    scanf("%d", &integer2);

    sum = integer1 + integer2;
    printf("Sum is %d\n", sum);

    return 0;
}