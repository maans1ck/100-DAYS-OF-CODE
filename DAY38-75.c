#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],rows,cols,i,j,sum=0;
    printf("Enter the number of rows (max 10): ");
    scanf("%d",&rows);
    printf("Enter the number of columns (max 10): ");
    scanf("%d",&cols);
    printf("Enter the elements of the first matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            sum+=a[i][j]+b[i][j];
        }
    }
    printf("The sum of all elements in both matrices is: %d\n",sum);
    return 0;
}