//WAP TO FIND FIRST NON REPEATING CHARACTER
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag;
    char s[50];
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        flag=0;
        for(j=0;s[j]!='\0';j++)
        {
            if(i!=j&&s[i]==s[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("first non repeating character is %c",s[i]);
            break;
        }
    }
    printf("no non repeating character found");
    return 0;
}
