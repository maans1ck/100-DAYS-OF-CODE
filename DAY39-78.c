#include <stdio.h>
int main()
{
    int a[10][10],sum=0,n,i,j;
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
        sum+=a[i][i];
}
    printf("The sum of the diagonal elements of the matrix is: %d\n",sum);
    return 0;
}