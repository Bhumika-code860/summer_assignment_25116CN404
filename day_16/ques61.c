//WAP TO FIND THE MISSING NUMBER IN ARRAY
#include<stdio.h>
int main()
{
    int n,i,arr[50],miss,expectsum,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    expectsum=n*(n+1)/2;
    miss=expectsum-sum;
    printf("missing number is %d",miss);
    return 0;
}
