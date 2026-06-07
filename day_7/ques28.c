//WAP TO RECURSIVE REVERSE NUMBER
#include<stdio.h>
int rev(int n,int r);
int main()
{
 int n,x,i;
 printf("enter the number:");
 scanf("%d",&n);
 printf("reverse of the number is:");
 x=rev(n,0);
 printf("%d\t",x);
 return 0;
}
int rev(int n,int r)
{
 if(n==0)
 return r;
 else
 return rev(n/10,r*10+n%10);
}
