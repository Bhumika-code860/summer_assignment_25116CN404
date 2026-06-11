//WAP TO WRITE FUNCTION TO FIND MAXIMUM
#include<stdio.h>
int max(int,int);
int main()
{
    int x,y,z;
    printf("enter the first number:");
    scanf("%d",&x);
    printf("enter the second number:");
    scanf("%d",&y);
    z=max(x,y);
    printf("maximum number is %d",z);
    return 0;
}
int max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}


