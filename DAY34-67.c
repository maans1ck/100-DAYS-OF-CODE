#include<stdio.h>
int main()
{
    int a[100],n,i,pos,element;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=element;
    printf("Array after insertion: ");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}