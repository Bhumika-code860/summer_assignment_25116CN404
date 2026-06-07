//WAP TO RECURSIVE SUM OF DIGITS
#include<stdio.h>
int sum(int n);
int main()
{
 int n,x,i;
 printf("enter the number:");
 scanf("%d",&n);
 printf("sum of digits is:");
 x=sum(n);
 printf("%d\t",x);
}
int sum(int n)
{
 if(n<=0)
 return 0;
 else
 return n%10+sum(n/10);
}
