#include <stdio.h>
int main(void)
{
    int n,rev=0;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
      int d=i%10;
      rev=rev*10+d;
    }
    printf("Reversed no. is %d",rev);
}