#include <stdio.h>

int main() 
{
    int n1,n2, sum , diff, product, quotient;
    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);
    sum = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;
    quotient = n1 / n2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    return 0;
}