//WAP TO PRINT ARMSTRONG NUMBERS IN A RANGE
#include<stdio.h>
int main()
{
    int a,d,n,b,i,c,x,temp,arm,natural,count;
    printf("enter the starting number of range:");
    scanf("%d",&a);
    printf("enter the ending number of range:");
    scanf("%d",&b);
    printf("armstrong numbers in the range are:");
    for(i=a;i<=b;i++)
    {
      natural=i;
      c=0;
      count=i;
      while(count>0)
      {
        c++;
        count=count/10;
      }
      temp=i;
      arm=0;
      while(temp>0)
      {
        x=1;
        d=temp%10;
        for(n=1;n<=c;n++)
        {
            x=x*d;
        }
        temp=temp/10;
        arm=arm+x;
      }
     if(arm==natural)
     printf("%d\n",natural);
    }
}
