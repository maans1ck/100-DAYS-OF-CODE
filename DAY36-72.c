#include <stdio.h>
int main()
{
    int a[10][10],i,j,rows,cols,sum=0;
    printf("Enter the number of rows (max 10): ");
    scanf("%d",&rows);
    printf("Enter the number of columns (max 10): ");
    scanf("%d",&cols);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("The sum of all elements in the matrix is: %d\n",sum);
    return 0;
}