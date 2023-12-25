//Write a 'C' program to find the area of ​​a circle.
//Area of circle:- π×r*r

#include<stdio.h>
#define Pi 3.14
int main(){
    float r, result;
    printf("Enter the radius:-");
    scanf("%f", &r);
    result = Pi*r*r;
    printf("Area of the cicle is %.2f", result);
    return 0;
}
