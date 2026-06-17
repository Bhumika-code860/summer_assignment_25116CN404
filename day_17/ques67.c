//WAP TO INTERSECTION OF ARRAYS
#include<stdio.h>
int main()
{
    int n,i,j,arr[50],brr[50],x;
    printf("Enter the size of first array:");
    scanf("%d",&n);
    printf("Enter the size of second array:");
    scanf("%d",&x);
    printf("enter elements for first array:");
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("enter elements for second array:");
    for(i=0;i<x;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&brr[i]);
    }
    printf("Intersection of arrays is:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<x;j++)
        {
            if(arr[i]==brr[j])
            {
                printf("%d\t",arr[i]);
                break;
            }
        }
    }
    return 0;
}
