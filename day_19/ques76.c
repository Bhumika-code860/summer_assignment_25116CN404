//WAP TO FIND DIAGONAL SUM
#include<stdio.h>
int main()
{
    int r1,c1,arr[50][50],i,j,sum=0,sum2=0;
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
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(i==j)
            sum=sum+arr[i][j];
            else if(i+j==r1-1)
            sum2=sum2+arr[i][j];
        }
    }
    printf("sum of principal diagonal elements is %d\n",sum);
    printf("sum of off diagonal elements is %d\n",sum2);
    return 0;
}
