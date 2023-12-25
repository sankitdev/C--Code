//program to find whether a given number is exactly divisible by another given number or not.

#include<stdio.h>
int main(){
    int a,b,result;
    printf("Enter the first number:-");
    scanf("%d",&a);
    printf("Enter the second number:-");
    scanf("%d",&b);
    result = a % b;
    printf("The result is %d.\n",result);
    if(result!= 0) {
        printf("The number is not exactly divisible");
    }
    else{
        printf("The number is divisible");
    }
    return 0;
}