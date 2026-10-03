#include <stdio.h>
int main()
{
    int a[10][10],rowsum[10],rows,cols,i,j;
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
        rowsum[i]=0;
        for(j=0;j<cols;j++)
        {
            rowsum[i]+=a[i][j];
        }
    }
    printf("The sum of elements in each row is:\n");
    for(i=0;i<rows;i++)
    {
        printf("Row %d: %d\n",i+1,rowsum[i]);
    }
    return 0;
}