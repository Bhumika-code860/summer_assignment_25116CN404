//WAP TO CONVERT LOWERCASE TO UPPERCASE
#include<stdio.h>
int main()
{
    int i;
    char s[50];
    printf("enter the string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    printf("string in uppercase is %s",s);
    return 0;
}
