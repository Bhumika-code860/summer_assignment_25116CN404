//WAP TO WRITE FUNCTION FOR FIBONACCI
#include<stdio.h>
#include<math.h>
int fibonacci(int);
int main()
{
    int x;
    printf("Enter the number of terms:");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}
int fibonacci(int x)
{
    int a,b,c,i;
    a=0;
    b=1;
    printf("fibonacci series is:");
    printf("%d\t%d\t",a,b);
    for(int i=0;i<x-2;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
