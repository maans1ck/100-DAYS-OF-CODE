#include <stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("Factorial of %d is %d\n",n,f);
    }
    return 0;
}