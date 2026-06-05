//WAP TO CHECK STRONG NUMBER
#include<stdio.h>
int main()
{
  int a,i,x,sum=0,fact,temp;
  printf("enter the number:");
  scanf("%d",&a);
  temp=a;
  while(a>0)
  {
    fact=1;
    x=a%10;
    while(x>0)
    {
      fact=fact*x;
      x--;
    }
    sum=sum+fact;
    a=a/10;
  }
  if(sum==temp)
  printf("%d is a strong number",temp);
  else
  printf("%d is not a strong number",temp);
}
