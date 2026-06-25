//WAP TO MERGE TWO SORTED ARRAYS
#include<stdio.h>
int main()
{
    int i,j,k,n1,n2,a[50],b[50],c[50];
    printf("enter the no of elements in first array:");
    scanf("%d",&n1);
    printf("enter the elements for first sorted array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no of elements in second array:");
    scanf("%d",&n2);
    printf("enter the elements for second sorted array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    i=j=k=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    while(i<n1)
    c[k++]=a[i++];
    while(j<n2)
    c[k++]=b[j++];
    printf("Merged sorted array is:\n");
    for(i=0;i<k;i++)
    printf("%d",c[i]);
    return 0;
}
