#include <stdio.h>
int main()
{
    int a[100],n,key,low,high,mid,i,found=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements in sorted order: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    low=0;
    high =n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            found=1;
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(found)
    {
        printf("Element %d is found at position %d.",key,mid+1);
    }
    else
    {
        printf("Element %d is not found in the array.",key);
    }
    return 0;
}