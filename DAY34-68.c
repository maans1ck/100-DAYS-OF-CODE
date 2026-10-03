#include<stdio.h>
int main()
{
    int a[100],n,i,pos;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);        
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to delete the element: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("Array after deletion: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}