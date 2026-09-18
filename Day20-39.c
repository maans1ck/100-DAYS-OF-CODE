#include<stdio.h>
int main(void)
{
    int n,p=1;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        if (d%2!=0)
        {
           p*=d;
        }
        
    }
    printf("Product of odd no. is %d",p);
}