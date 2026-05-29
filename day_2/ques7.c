//WAP TO FIND PRODUCT OF DIGITS
#include<stdio.h>
int main()
{
  int x,n,prod=1;
printf("enter the number:");
scanf("%d",&x);
while(x>0)
{
n=x%10;
prod=prod*n;
x=x/10;
}
printf("product of digits is %d",prod);
return 0;
}
