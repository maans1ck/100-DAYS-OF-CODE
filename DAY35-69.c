#include <stdio.h>
int main()
{
    int a[100],i,n,largest,second_largest;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=second_largest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            second_largest=largest;
            largest=a[i];
        }
        else if(a[i]>second_largest && a[i]!=largest)
        {
            second_largest=a[i];
        }
    }
    if(second_largest==largest)
    {
        printf("There is no second largest element in the array.\n");
    }
    else
    {
        printf("The second largest element in the array is: %d\n",second_largest);
    }
    return 0;
}