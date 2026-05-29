//WAP TO CHECK WHETHER A NUMBER IS PALINDROME
#include<stdio.h>
int main()
{
  int x,n,temp,rev=0;
printf("enter the number to be checked:");
scanf("%d",&x);
temp=x;
while(x>0)
{n=x%10;
rev=rev*10+x;
x=x/10;
}
if(rev==temp)
  printf("palindrome number");
else
  printf("not palindrome number");
}
