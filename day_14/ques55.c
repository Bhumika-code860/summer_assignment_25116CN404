//WAP TO SECOND LARGEST ELELMENT
#include<stdio.h>
int main()
{
    int n,i,arr[50],x,y;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    x=arr[0];
    y=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>x)
        {
            y=x;
            x=arr[i];
        }
        else if(arr[i]>y&&arr[i]!=x)
        {
            y=arr[i];
        }
    }
    printf("second largest element is %d",y);
    return 0;
}
