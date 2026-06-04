//WAP TO CHECK ARMSTRONG NUMBER
#include<stdio.h>
int main()
{
    int n,b,i,c=0,x=1,temp,arm=0,natural;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    natural=n;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    while(temp>0)
    {
        x=1;
        b=temp%10;
        for(i=1;i<=c;i++)
        {
            x=x*b;
        }
        temp=temp/10;
        arm=arm+x;
    }
    if(arm==natural)
    printf("armtsrong");
    else
    printf("not armstrong");
}
