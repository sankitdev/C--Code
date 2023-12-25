//C =(F-32)*5/9 (Write program to convert input Fahrenheit to Celcius)

#include<stdio.h>
int main() {
    float C,F;
    printf("Enter the Fahrenheit value:-");
    scanf("%f",&F);
    C = (F-32)*5/9;
    printf("The conversion value in Celcius would be %.2f",C);
    return 0;
}