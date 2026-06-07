//WAP TO RECURSIVE FIBONACCI
#include<stdio.h>
int fibonacci(int i);
int main()
{
 int n,x,i;
 printf("enter the number of terms of series:");
 scanf("%d",&n);
 printf("fibonacci series is:");
 for(i=0;i<n;i++)
 {
  x=fibonacci(i);
  printf("%d\t",x);
 }
 return 0;
}
int fibonacci(int i)
{
 if(i==0)
 return 0;
 else if(i==1)
 return 1;
 else
 return fibonacci(i-1)+fibonacci(i-2);
}
