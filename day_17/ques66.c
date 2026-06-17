//WAP TO UNION OF ARRAYS
#include<stdio.h>
int main()
{
    int n,i,j,arr[50],brr[50],k=0,uni[100],x,y;
    printf("Enter the size of first array:");
    scanf("%d",&n);
    printf("Enter the size of second array:");
    scanf("%d",&x);
    printf("enter elements for first array:");
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
        uni[k++]=arr[i];
    }
    printf("enter elements for second array:");
    for(i=0;i<x;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&brr[i]);
    }
    for(i=0;i<x;i++)
    {

        y=0;
        for(j=0;j<k;j++)
        {
            if(brr[i]==uni[j])
            {
                y=1;
                break;
            }
        }
        if(y==0)
        {
            uni[k++]=brr[i];
        }
    }
    printf("Union of array is:");
    for(i=0;i<k;i++)
    {
        printf("%d\t",uni[i]);
    }
    return 0;
}
