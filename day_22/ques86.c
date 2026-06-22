//WAP TO COUNT WORDS IN A SENTENCE
#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char s[50];
    printf("enter a sentence:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]==' '||s[i]=='\n')&&(s[i+1]!=' '&& s[i+1]!='\0'))
            count++;;
    }
        if(s[0]!='\0'&&s[0]!='\n')
        count++;
    printf("number of words=%d",count);
    return 0;
}
