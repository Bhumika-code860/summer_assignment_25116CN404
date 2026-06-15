//WAP TO MOVE ZEROS TO END
#include<stdio.h>
int main()
{
    int n,i,arr[50],temp,j=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    printf("after moving the array is:");
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
