//WAP TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
int main()
{int n,fact=1;
printf("enter the number:");
scanf("%d",&n);
while(n>=1)
{
fact=fact*n;
n--;
}
printf("factorial is %d",fact);
return 0;
}
