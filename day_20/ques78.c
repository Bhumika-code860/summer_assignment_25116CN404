//WAP TO CHECK SYMMETRIC MATRIX
#include<stdio.h>
int main()
{
    int r1,c1,arr[50][50],i,j,flag=1;
    printf("enter the number of rows in matrix:");
    scanf("%d",&r1);
    printf("enter the number of columns in matrix:");
    scanf("%d",&c1);
    printf("enter elements for matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            {
                if(arr[i][j]!=arr[j][i])
                {
                    flag=0;
                    break;
                }
            }
    }
    if(flag=1)
    printf("the matrix is symmetric");
    else
    printf("the matrix is not symmetric");
    return 0;
}
