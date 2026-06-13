// WAP TO CALCULATE THE SUM OF FIRST N NATURAL NUMBERS
#include<stdio.h>
int main()
{int n,sum=0,i=1;
printf("enter the value of n:");
scanf("%d",&n);
while(i<=n)
{sum=sum+i;
i++;}
printf("sum of first n natural numbers is %d",sum);
 return 0;
}                 
