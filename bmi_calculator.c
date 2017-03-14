#include <stdio.h>

int main(void)
{
    double weigthInKilograms;
    double heightInCentimeters;
    double bmi;

    printf("BMI calculator\n");
    printf("Enter your weight in kilograms: ");
    scanf("%lf", &weigthInKilograms);

    printf("Enter your height in centimeters: ");
    scanf("%lf", &heightInCentimeters);

    bmi = weigthInKilograms / ((heightInCentimeters / 100) * (heightInCentimeters / 100));
    printf("Your BMI is %f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweigth\n");
    }

    if (bmi >= 18.5 && bmi < 25) {
        printf("You are normal\n");
    }

    if (bmi >= 25 && bmi < 30) {
        printf("You are overweight\n");
    }

    if (bmi >= 30) {
        printf("You are obese\n");
    }

    return 0;
}