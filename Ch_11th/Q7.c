//Rs. If P's loan is taken for N years at the rate of R% interest, 
//then write 'C' program to find the compound interest on it. P. 
//The prices of R and N will be given by the students.

//Compound Interest = P x (pow(1 + r/100, Time)) - P

#include<stdio.h>
#include<math.h>
int main() {
    float P, R, T, Result;
    printf("Enter the principal amount:-");
    scanf("%f", &P);
    printf("Enter the rate:-");
    scanf("%f", &R);
    printf("Enter the time period:-");
    scanf("%f", &T);
    Result = P * (pow(1+ R / 100, T)) - P;
    printf("Compount Interest = %.2f", Result);
    return 0;
}