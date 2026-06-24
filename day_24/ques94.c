//WAP TO COMPRESS A STRING
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int count,i;
    printf("enter the string:");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        count=1;
        while(s1[i]==s1[i+1])
        {
            count++;
            i++;
        }
        printf("%c%d",s1[i],count);
    }
    return 0;
}
