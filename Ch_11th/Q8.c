//Write a 'C' program to find the volume of a solid.
//Volume of prism or cuboid=l×w×h

#include<stdio.h>
int main(){
    float l,w,h,result;
    printf("Enter the lenght, width, and height:-");
    scanf("%f %f %f",&l,&w,&h);
    result = l*w*h;
    printf("Volume of a cuboid is %.2f", result);
    return 0;
}