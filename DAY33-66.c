#include<stdio.h>
int main()
{
    int a[100],n,i,element;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element to be insert: ");
    scanf("%d",&element);
    for(i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=element;
    printf("Array after insertion: ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}