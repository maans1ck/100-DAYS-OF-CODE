#include <stdio.h>
int main()
{
    int n,og,rm,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    og=n;
    while(n!=0)
    {
        rm=n%10;
        sum=sum+rm*rm*rm;
        n=n/10;
    }  
    if(og==sum)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }
}