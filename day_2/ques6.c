//WAP TO REVERSE A NUMBER
#include<stdio.h>
int main()
{
  int x,n,rev=0;
printf("enter the number:");
scanf("%d",&x);
while(x>0)
{
n=x%10;
rev=rev*10+x;
x=x/10;
}
printf("reverse of the number is %d",rev);
}
