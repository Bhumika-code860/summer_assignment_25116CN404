//WAP TO CREATE MENU-DRIVEN ARRAY OPERATION SYSTEM
#include<stdio.h>
int main()
{
    int choice,a,arr[100],n,i,key,found=0,sum=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\n1.DISPLAY");
    printf("\n2.SUM");
    printf("\n3.SEARCH");
    printf("\nENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("array is:");
        for(i=0;i<n;i++)
        printf("%d",&arr[i]);
        break;
        case 2:
        for(i=0;i<n;i++)
        sum=sum+arr[i];
        printf("sum is %d",sum);
        break;
        case 3:
        printf("enter the element to search");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                found=1;
                break;
            }
        }
        if(found==0)
        printf("element not found");
        else
        printf("element found");
        break;
        default:
        printf("INVALID CHOICE");
    }
    return 0;  
}
