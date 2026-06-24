//WAP TO FIND THE LONGEST WORD IN A STRING
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],longest[100];
    int i,len=0,max=0,start=0;
    printf("enter the string:");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=' '&&s1[i]!='\0'&&s1[i]!='\n')
        {
            len++;
        }
        else
        {
            if(len>max)
            {
                max=len;
                strncpy(longest,&s1[start],len);
                longest[len]='\0';
            }
            len=0;
            start=i+1;
        }
        if(s1[i]=='\0')
        break;
    }
    printf("longest word:%s\n",longest);
    printf("length:%d",max);
    return 0;
}
