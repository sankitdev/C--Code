// Change Meter into Millimeter
// 1m = 1000 ml (multiply meter by 1000)

#include<stdio.h>
int main(){
    float meter, result;
    printf("Enter the number in meter:-");
    scanf("%f", &meter);
    result = meter*1000;
    printf("The conversion of meter into millimeter would be %.2f",result);
    return 0;
}