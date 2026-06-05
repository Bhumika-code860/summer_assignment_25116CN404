//WAP TO CHECK PERFECT NUMBER
#include<stdio.h>
int main()
{
  int a,i,sum=0;
  printf("enter the number:");
  scanf("%d",&a);
  for(i=1;i<a;i++)
  {
   if(a%i==0)
   sum=sum+i;
  }
  if(sum==a)
  printf("%d is a perfect number",a);
  else
  printf("%d is not a perfect number",a);
}
