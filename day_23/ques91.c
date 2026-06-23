//WAP TO CHECK ANAGRAM STRINGS
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len1,len2,flag=1;
    char s[50],b[50],temp;
    printf("enter first string:");
    gets(s);
    printf("enter second string:");
    gets(b);
    len1=strlen(s);
    len2=strlen(b);
    if(len1!=len2)
    {
        flag=0;
    }
    else
    {
        for(i=0;i<len1;i++)
        {
            for(j=i+1;j<len2;j++)
            {
                if(s[i]>s[j])
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(i=0;i<len1;i++)
        {
            if(s[i]!=b[i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    printf("strings are anagrams");
    else
    printf("strings are not anagrams");
    return 0;
}
