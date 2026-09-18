#include <stdio.h>
#include <math.h>
int main(void)
{
    int n,rev=0,c=0;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        rev=rev*10+d;
        c++;
    }
    int last=n%10;
    int revlast=rev%10;
    n=((n-revlast*pow(10,c-1))+last*pow(10,c-1))-last+revlast;printf("%d",n);

}
