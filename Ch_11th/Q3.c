//Program to find the average of 3 numbers

#include <stdio.h>
int main() {
    float a,b,c,average;
    printf("Enter three numbers:-");
    scanf("%f %f %f", &a,&b,&c);
    average = (a+b+c)/3;
    printf("The average of given three numbers would be %.2f", average);
    return 0;
}