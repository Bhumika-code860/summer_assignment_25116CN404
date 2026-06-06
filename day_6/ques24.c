//WAP TO FIND x^n WITHOUT POW()
#include<stdio.h>
int main()
{
 int n,x,i,power=1;
 printf("enter the number i.e base:");
 scanf("%d",&x);
 printf("enter the number i.e exponent:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  power=power*x;
 }
 printf("%d^%d equals to %d",x,n,power);
 return 0;
}
