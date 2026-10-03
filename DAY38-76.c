#include <stdio.h>
int main()
{
    int a[10][10],n,i,j,skew=1;
    printf("Enter the number of rows and columns (max 10): ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i][j]!=-a[j][i])
            {
                skew=0;
                break;
            }
        }
        if(skew==0)
        {
            break;
        }
    }
    if(skew==0) 
    {
        printf("The matrix is not skew-symmetric.\n");
    }
    else
    {
        printf("The matrix is skew-symmetric.\n");
    }
    return 0;
}