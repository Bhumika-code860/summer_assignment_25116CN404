//WAP TO FIND SUM AND AVERAGE OF AN ARRAY
#include<stdio.h>
int main()
{
    int n,i,arr[50],avg,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("the sum of array is %d\n",sum);
    printf("the average of array is %d",avg);
    return 0;
}
