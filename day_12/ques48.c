//WAP TO WRITE FUNCTION FOR PERFECT NUMBER
#include<stdio.h>
#include<math.h>
int perfect(int);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    perfect(x);
    return 0;
}
int perfect(int x)
{
    int i,sum=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==x)
    printf("perfect number");
    else
    printf("not a perfect number");
}
