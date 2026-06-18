//WAP TO BINARY SEARCH
#include<stdio.h>
int main()
{
    int n,i,key,arr[50],low,high,mid,y;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter elements for array:");
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(arr[mid]==key)
        {
            y=1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(y==1)
    printf("element found at %d index",mid);
    else
    printf("element not found");
    return 0;
}
