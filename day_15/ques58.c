//WAP TO ROTATE ARRAY LEFT
#include<stdio.h>
int main()
{
    int n,i,arr[50],temp,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    printf("rotated array is:");
    temp=arr[0];
    for(j=0;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    arr[n-1]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
