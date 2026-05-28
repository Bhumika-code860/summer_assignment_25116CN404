//WAP TO PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER
#include<stdio.h>
int main()
{int n,i;
printf("enter the number:");
scanf("%d",&n);
printf("multiplication of number is:");
for(i=1;i<=10;i++)
{
  printf(%d*%d=%d,n,i,n*i);
}
return 0;
}
