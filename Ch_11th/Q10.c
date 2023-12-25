/* Rs. If P's loan is taken for N years at the rate of R% interest, 
then write a 'C' program to find the simple interest on it. 
The prices of P, R and N will be given by the students.*/

//Simple Interest (SI)=P×R×T/100

#include<stdio.h>
int main() {
    float P, R, T, Result;
    printf("Enter the principal amount:-");
    scanf("%f", &P);
    printf("Enter the rate:-");
    scanf("%f", &R);
    printf("Enter the time period:-");
    scanf("%f", &T);
    Result = (P*R*T)/100;
    printf("Simple Interest = %.2f", Result);
    return 0;
}