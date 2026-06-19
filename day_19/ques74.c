//WAP TO SUBTRACT MATRICES
#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,arr[50][50],brr[50][50],crr[50][50],i,j;
    printf("Enter the number of rows in first matrix:");
    scanf("%d",&r1);
    printf("Enter the number of columns in first matrix:");
    scanf("%d",&c1);
    printf("Enter the number of rows in second matrix:");
    scanf("%d",&r2);
    printf("Enter the number of columns in second matrix:");
    scanf("%d",&c2);
    if(r1!=r2||c1!=c2)
    printf("Subtraction not possible");
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
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                crr[i][j]=arr[i][j]-brr[i][j];
            }
        }
        printf("Subtraction is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",crr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
