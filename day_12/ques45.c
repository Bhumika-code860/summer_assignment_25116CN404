//WAP TO WRITE FUNCTION FOR PALINDROME
#include<stdio.h>
int palindrome(int);
int main()
{
    int x;
    printf("Enter the number to be checked:");
    scanf("%d",&x);
    palindrome(x);
    return 0;
}
int palindrome(int x)
{
    int n,temp,rev=0;
    temp=x;
    while(x>0)
    {
        n=x%10;
        rev=rev*10+n;
        x=x/10;
    }
    if(temp==rev)
    printf("it is a palindrome number");
    else
    printf("it is not a palindrome number");
}
