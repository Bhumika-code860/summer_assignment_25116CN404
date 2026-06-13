//WAP TO COUNT EVEN AND ODD ELEMENTS OF AN ARRAY
#include<stdio.h>
int main()
{
    int n,i,arr[50],even=0,odd=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("the number of even elements in array is %d\n",even);
    printf("the number of odd elements in array is %d",odd);
    return 0;
}
