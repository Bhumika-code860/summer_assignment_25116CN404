//WAP TO FIND MAXIMUM FREQUENCY ELEMENT
#include<stdio.h>
int main()
{
    int n,i,arr[50],j,x,max=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int freq=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }
        if(freq>max)
        {
            max=freq;
            x=arr[i];
        }
    }
    printf("maximum frequency element is %d",x);
    return 0;
}
