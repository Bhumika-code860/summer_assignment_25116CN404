//WAP TO WRITE FUNCTION TO FIND FACTORIAL
#include<stdio.h>
int factorial(int);
int main()
{
    int x,y;
    printf("enter the number for factorial:");
    scanf("%d",&x);
    y=factorial(x);
    printf("factorial is %d",y);
    return 0;
}
int factorial(int x)
{
    int i,fact=1;
    i=1;
    while(i<=x)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}


