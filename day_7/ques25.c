//WAP TO RECURSIVE FACTORIAL
#include<stdio.h>
long long int factorial(int n);
int main()
{
 int n;
 long long int x;
 printf("enter the number:");
 scanf("%d",&n);
 x=factorial(n);
 printf("Factorial of the number is %lld",x);
 return 0;
}
long long int factorial(int n)
{
 if(n==0||n==1)
 return 1;
 else
 return n*factorial(n-1);
}
