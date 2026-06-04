//WAP TO FIND NTH FIBONACCI TERM
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("enter the NTH number of term:");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
     c=a+b;
     a=b;
     b=c;
    }
    printf("Nth term is %d",c);
}
