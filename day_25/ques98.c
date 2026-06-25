//WAP TO FIND COMMON CHARACTERS IN STRINGS
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s1[100],s2[100];
    printf("enter the first string:");
    gets(s1);
    printf("enter the second string:");
    gets(s2);
    printf("Common characters are:");
    for(i=0;s1[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';j++)
        {
            if(s1[i]==s2[j]&&s1[i]!='\n')
            {
                printf("%c",s1[i]);
                break;
            }
        }
    }
    return 0;
}
