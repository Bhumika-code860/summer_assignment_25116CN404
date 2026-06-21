//WAP TO FIND STRING LENGTH WITHOUT STRLEN()
#include<stdio.h>
int main()
{
    int i,len=0;
    char s[50];
    printf("enter the string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    printf("length of the string is %d",len);
    return 0;
}
