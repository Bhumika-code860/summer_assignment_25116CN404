//WAP TO FIND GREATEST COMMON FACTOR OF TWO NUMBERS
#include<stdio.h>
int main()
{
    int a,b,i,min;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    if(a>b)
    min=b;
    else
    min=a;
    for(i=min;i>=1;i--)
    {
     if(a%i==0&&b%i==0)
    {
     printf("Greatest Common Factor is %d",i);
     break;
    }
    }
}
