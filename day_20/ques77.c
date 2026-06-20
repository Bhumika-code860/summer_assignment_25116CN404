//WAP TO MULTIPLY MATRICES
#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,arr[50][50],brr[50][50],crr[50][50],i,j,k;
    printf("enter the number of rows in first matrix:");
    scanf("%d",&r1);
    printf("enter the number of columns in first matrix:");
    scanf("%d",&c1);
    printf("enter the number of rows in second matrix:");
    scanf("%d",&r2);
    printf("enter the number of columns in second matrix:");
    scanf("%d",&c2);
    if(c1!=r2)
    printf("multiplication is not possible");
    else
    {
        printf("enter elements for first matrix:");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("enter elements for second matrix:");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&brr[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                crr[i][j]=0;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    crr[i][j]=crr[i][j]+arr[i][k]*brr[k][i];
                }
            }
        }
        printf("matrix multiplication is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d",crr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
