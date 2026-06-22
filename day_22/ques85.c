//WAP TO CHECK PALINDROME STRING
#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,flag=1;
    char s[50],b[50];
    printf("enter the string:");
    gets(s);
    len=strlen(s);
    for(i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            flag=0;
            break;
        }
    }
    if(flag=1)
    printf("palindrome string");
    else
    printf("not a palindrome string");
    return 0;
}
