// Write a 'C' program to find the area of ​​a rectangle.
// Area of rectangle = Length X Width

#include <stdio.h>
int main() {
    float l,w,Area;
    printf("Enter the length of the rectangle in cm:-");
    scanf("%f",&l);
    printf("Enter the width of the rectangle in cm:-");
    scanf("%f",&w);
    Area = l * w;
    printf("Area of rectangle is %.2f cm square.", Area);
    return 0;
}