//WAP TO PRINT PRIME NUMBERS IN A RANGE
#include<stdio.h>
int main()
{
    int a,b,i,j,flag=0;
    printf("enter the starting number of range:");
    scanf("%d",&a);
    printf("enter the ending number of range:");
    scanf("%d",&b);
    printf("prime numbers are:\n");
    for(i=a;i<=b;i++)
    {
      flag=0;
      for(j=2;j<i;j++)
    {
      if(i%j==0)
    {
      flag=1;
      break;
    }
    }
      if(flag==0)
      printf("%d\n",i);
    }
}
