#include <stdio.h>
int main(void)
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {   int p=1;
        int d=i%10;
        for(int i=1;i<=d;i++)
        p*=i;

        s+=p;
    }
    if(s==n)
    printf("Strong number");
    else
    printf("Not a strong number");
}