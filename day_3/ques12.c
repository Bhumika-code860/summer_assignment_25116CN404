//WAP TO FIND LEAST COMMON MULTIPLE OF TWO NUMBERS
#include<stdio.h>
int main()
{
    int a,b,i,max;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    if(a>b)
    max=a;
    else
    max=b;
    for(i=max;i<=(a*b);i++)
    {
     if(i%a==0&&i%b==0)
    {
     printf("Least Common Multiple is %d",i);
     break;
    }
    }
}
