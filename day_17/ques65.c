//WAP TO MERGE ARRAYS
#include<stdio.h>
int main()
{
    int n,i,arr[50],brr[50],x,merge[100];
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
    for(i=0;i<n;i++)
    {
        merge[i]=arr[i];
    }
    for(i=0;i<x;i++)
    {
        merge[i+n]=brr[i];
    }
    printf("Array after merging is:");
    for(i=0;i<n+x;i++)
    {
        printf("%d\t",merge[i]);
    }
    return 0;
}
