//WAP TO COUNT SET BITS IN A NUMBER
#include<stdio.h>
int main()
{int n,count=0;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
 if(n&1)
{
    count++;
}
 n=n/2;
 
}
printf("number of set bits is %d",count);
return 0;
}
