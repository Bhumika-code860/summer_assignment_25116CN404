//WAP TO FREQUENCY OF AN ELEMENT
#include<stdio.h>
int main()
{
    int n,i,arr[50],x,count=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the element frequency to be searched:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    printf("frequency of the element is %d",count);
    return 0;
}
