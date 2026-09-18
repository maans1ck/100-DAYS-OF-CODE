#include<stdio.h>
int main(void)
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i-1;j>0;j--)
        printf(" ");

        for(int j=i;j<=5;j++)
        printf("%d",j);

        printf("\n");
    }
}