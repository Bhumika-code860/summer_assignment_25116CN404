//WAP TO SORT ARRAY IN DESCENDING ORDER
#include<stdio.h>
int main()
{
    int n,i,j,arr[50],temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter elements for array:");
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("array in descending order:-");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
