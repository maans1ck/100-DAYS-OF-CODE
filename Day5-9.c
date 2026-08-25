#include<stdio.h>
#include<math.h>
int main()
{
    int principal, rate, time;
    float simple_interest, compound_interest;
    printf("Enter principal amount, rate of interest and time (in years): ");
    scanf("%d %d %d", &principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100.0;
    printf("Simple Interest: %.2f\n", simple_interest);
    compound_interest = principal * pow(1 + rate / 100.0, time) - principal;
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}