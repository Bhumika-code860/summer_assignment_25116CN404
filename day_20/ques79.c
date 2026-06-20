//WAP TO FIND ROW WISE SUM
#include<stdio.h>
int main()
{
    int r1,c1,arr[50][50],i,j,sum;
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
    printf("row wise sums are:\n");
    for(i=0;i<r1;i++)
    {
        sum=0;
        for(j=0;j<c1;j++)
            {
                sum=sum+arr[i][j];
            }
            printf("sum of row %d=%d\n",i+1,sum);
    }
    return 0;
}
