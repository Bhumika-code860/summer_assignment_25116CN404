//WAP TO FIND SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main()
{
  int n,x,sum=0;
printf("enter the number:");
scanf("%c",&n);
while(n>0)
{
x=n%10;
sum=sum+x;
n=n/10;
}
printf("sum of digits is %d",sum);
}
