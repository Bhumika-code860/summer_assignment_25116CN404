//WAP TO FIND LARGEST AND SMALLEST ELEMENT OF AN ARRAY
#include<stdio.h>
int main()
{
    int n,i,arr[50],max,min;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    printf("the largest element of array is %d\n",max);
    printf("the smallest element of array is %d",min);
    return 0;
}
