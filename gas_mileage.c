#include <stdio.h>

int main(void)
{
    float totalGallons = 0;
    float totalMiles = 0;
    float gallons;
    float miles;
    float average;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);

    while (gallons != -1) {
        
        totalGallons += gallons;
        printf("Enter the miles driven: ");
        scanf("%f", &miles);
        totalMiles += miles;
        printf("The miles / gallon for this tank was %.2f\n\n", miles / gallons);

        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);

    }

    average = totalMiles / totalGallons;
    printf("\nThe overall average miles / gallon was %.2f\n", average);

    return 0;

}



/*initialize variables:
set total gallons to zero
set total miles to zero
set miles
set gallons
set average

get gallons used and miles driven:

input gallons
while gallons different than -1 (sentinel value)
    add gallons to total gallons
    input miles
    add miles to toal miles

    print average miles per gallon
    input next gallons

compute average miles per gallon

print average miles per gallon
*/