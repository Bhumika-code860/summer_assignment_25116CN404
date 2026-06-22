//WAP TO CHARACTER FREQUENCY
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0;
    char s[50];
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        count=1;
        if(s[i]=='*')
            continue;
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                count++;
                s[j]='*';
            }
        }
    printf("%c=%d\n",s[i],count);
    }
    return 0;
}
