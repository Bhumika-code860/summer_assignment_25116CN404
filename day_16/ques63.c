//WAP TO FIND PAIR WITH GIVEN SUM
#include<stdio.h>
int main()
{
    int n,i,arr[50],sum,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the sum u want:");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("the pair is %d and %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}
