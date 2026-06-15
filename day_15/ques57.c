//WAP TO REVERSE ARRAY
#include<stdio.h>
int main()
{
    int n,i,arr[50];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    printf("reverse array is:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
