#include <stdio.h>
int main()
{
    int a[10][10],rows,cols,i,j;
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
    return 0;
}