#include<stdio.h>
int main(void)
{
    int n; float s=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     float n=2*i;
     float d=(2*i)+(2*(i-1)+1);
     s+=n/d;
    }
    printf("%.2f",s);
}