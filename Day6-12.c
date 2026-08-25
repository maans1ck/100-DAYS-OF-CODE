#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if(n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("The number is zero\n");
    }   

    return 0;
}