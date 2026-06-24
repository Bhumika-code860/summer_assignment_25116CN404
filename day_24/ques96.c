//WAP TO REMOVE DUPLICATE CHARACTERS
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int i,j;
    printf("enter the string:");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        for(j=i+1;s1[j]!='\0';j++)
        {
            if(s1[i]==s1[j])
            {
                int k;
                for(k=j;s1[k]!='\0';k++)
                {
                    s1[k]=s1[k+1];
                }
            }
            else
            {
                j++;
            }
        }
    }
    printf("string after removing duplicated:%s\n",s1);
    return 0;
}
