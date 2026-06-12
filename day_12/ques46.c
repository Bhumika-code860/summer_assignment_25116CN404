//WAP TO WRITE FUNCTION FOR ARMSTRONG
#include<stdio.h>
#include<math.h>
int armstrong(int);
int main()
{
    int x;
    printf("Enter the number to be checked:");
    scanf("%d",&x);
    armstrong(x);
    return 0;
}
int armstrong(int x)
{
    int n,temp,orig,y,count=0,rev=0;
    temp=x;
    orig=x;
    while(x>0)
    {
        count++;
        x=x/10;
    }
    while(orig>0)
    {
        y=1;
        n=orig%10;
        for(int i=0;i<count;i++)
        {
            y=y*n;
        }
        rev=rev+y;
        orig=orig/10;
    }
    if(temp==rev)
    printf("it is an armstrong number");
    else
    printf("it is not an armstrong number");
}
