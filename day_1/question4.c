//WAP TO COUNT DIGITS IN A NUMBER
#include<stdio.h>
int main()
{
  int n,count=0;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
count++;
n=n/10;
}
printf("no of digits is %d",count);
}
