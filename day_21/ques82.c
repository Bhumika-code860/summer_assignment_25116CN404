//WAP TO REVERSE A STRING
#include<stdio.h>
int main()
{
    int i,len=0;
    char s[50],temp;
    printf("enter the string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len/2;i++)
    {
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
    printf("reverse string is %s",s);
    return 0;
}
