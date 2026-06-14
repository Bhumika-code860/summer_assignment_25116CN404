//WAP TO LINEAR SEARCH 
#include<stdio.h>
int main()
{
    int n,i,arr[50],x,flag=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag=1;
            printf("element found at %d index",i);
            break;
        }
    }
    if(flag==0)
    printf("element not found");
    return 0;
}
