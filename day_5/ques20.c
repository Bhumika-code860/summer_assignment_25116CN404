//WAP TO FIND LARGEST PRIME FACTOR OF A NUMBER
#include<stdio.h>
int main()
{
  int a,i,j,primfact=1;
  printf("enter the number:");
  scanf("%d",&a);
  for(i=2;i<=a;i++)
  {
    if(a%i==0)
    {
      for(j=2;j<i;j++)
      {
        if(i%j==0)
        break;
      }
      if(j==i)
      primfact=i;
    }
  }
  printf("LARGEST PRIME FACTOR OF THE NUMBER IS %d",primfact);
}
