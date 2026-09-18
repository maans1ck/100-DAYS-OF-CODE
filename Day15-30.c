#include <stdio.h>
int main()
{
    int n,r=0,rm;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rm=n%10;
        r=r*10+rm;
        n=n/10;
    }
    printf("Reversed number: %d\n",r);
    return 0;
}