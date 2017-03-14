#include <stdio.h>

int main(void)
{
    int account;
    float beginningBalance;
    float charges;
    float credits;
    float creditLimit;
    float newBalance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    while (account != -1) {

        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);
        printf("Enter total charges: ");
        scanf("%f", &charges);
        printf("Enter total credits: ");
        scanf("%f", &credits);
        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        newBalance = beginningBalance + charges - credits;

        if (newBalance > creditLimit) {
            printf("Account: %d\n", account);
            printf("Credit limit: %.2f\n", creditLimit);
            printf("Balance: %.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n\n");
        } else {
            printf("Credit Limit not Exceeded.\n\n");
        }

        printf("Enter account number (-1 to end): ");
        scanf("%d", &account);
        
    }

    return 0;
}


/*
initialize account number
initialize beginning balance
initialize total charges
initialize total credits
initialize cedit limit
initialize new balance

input account number
while account number is different from -1
    input beginning balance
    input total charges
    input total credit
    input credit limit

    compute new balance = beginning balance  + total charges - total credits

    if new balance > credit limit
        print account number
        print credit limit
        print new balance
        print "Credit Limit Exceeded."
    else
        print "Credit Limit not Exceeded."

*/