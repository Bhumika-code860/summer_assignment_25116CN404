//WAP TO PRINT FACTORS OF A NUMBER
#include<stdio.h>
int main()
{
  int a,i;
  printf("enter the number:");
  scanf("%d",&a);
  printf("factors are:\n");
  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    printf("%d\n",i);
  }
}
