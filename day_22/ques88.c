//WAP TO REMOVE SPACES FROM A STRING
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char s[50];
    printf("enter a stringb:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
             s[j]=s[i];
             j++;
        }
    }
    s[j]='\0';
    printf("string after removing space is %s",s);
    return 0;
}
