//WAP TO TRANSPOSE MATRIX
#include<stdio.h>
int main()
{
    int r1,c1,arr[50][50],i,j;
    printf("Enter the number of rows in matrix:");
    scanf("%d",&r1);
    printf("Enter the number of columns in matrix:");
    scanf("%d",&c1);
    printf("enter elements for matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
