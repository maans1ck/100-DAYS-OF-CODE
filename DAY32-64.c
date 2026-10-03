#include <stdio.h>
int main()
{
    int n, c[10]={0},digit,max=0,mostdigit=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    if(n==0)
    {
        printf("The most repeated digit is 0 and it is repeated 1 times.");
        return 0;
    }
    while(n>0)
    {
        digit=n%10;
        c[digit]++;
        n/=10;
    }
    for(i=0;i<10;i++)
    {
        if(c[i]>max)
        {
            max=c[i];
            mostdigit=i;
        }
    }
    printf("The most repeated digit is %d and it is repeated %d times.",mostdigit,max);
    return 0;
}