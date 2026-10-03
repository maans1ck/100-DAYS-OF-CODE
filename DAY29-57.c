#include <stdio.h>
int main()
{
    int a[100],n,i,s=0;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }
    printf("Sum of elements is %d", s);
    return 0;
}