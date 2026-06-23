//WAP TO FIND FIRST REPEATING CHARACTER
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag=0;
    char s[50];
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                flag=1;
                printf("first repeating character is %c",s[i]);
                break;
            }
        }
    }
    if(flag==0)
    printf("no repeating character found");
    return 0;
}
