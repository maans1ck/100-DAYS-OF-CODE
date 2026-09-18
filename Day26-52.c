#include<stdio.h>
int main(void)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2*i+1;j++)
        printf("*\n");

        printf("\n");
    }
    for(int i=1;i>=0;i--)
    {
        for(int j=0;j<2*i+1;j++)
        printf("*\n");

        printf("\n");

    }
}