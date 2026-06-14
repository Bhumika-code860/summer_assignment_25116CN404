//WAP TO FIND DUPLICATES IN AN ARRAY
#include<stdio.h>
int main()
{
    int n,i,arr[50],j,k,printed,count=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements are:");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            printed=0;
            for(k=0;k<i;k++)
            {
                if(arr[k]==arr[i])
                {
                  printed=1;
                  break;
                }
            }
            if(printed==0)
                {
                   printf("%d\t",arr[i]);
                }
        }
    }
    return 0;
}
