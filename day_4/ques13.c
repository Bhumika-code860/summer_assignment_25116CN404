//WAP TO GENERATE FIBONACCI SERIES
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("enter the total number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series is:\n");
    printf("%d\n%d\n",a,b);
    for(i=3;i<=n;i++)
    {
     c=a+b;
     printf("%d\n",c);
     a=b;
     b=c;
    }
}
