//WAP TO WRITE FUNCTION TO CHECK PRIME
#include<stdio.h>
int prime(int);
int main()
{
    int x,y,z;
    printf("enter the number to be checked:");
    scanf("%d",&x);
    prime(x);
    return 0;
}
int prime(int x)
{
    int i,flag=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=1;
            printf("not a prime number");
            break;
        }
    }
    if(flag==0)
    printf("prime number");
}


