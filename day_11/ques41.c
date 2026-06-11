//WAP TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS
#include<stdio.h>
int sum(int,int);
int main()
{
    int x,y,z;
    printf("enter the first number:");
    scanf("%d",&x);
    printf("enter the second number:");
    scanf("%d",&y);
    z=sum(x,y);
    printf("sum of the numbers is %d",z);
    return 0;
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}


