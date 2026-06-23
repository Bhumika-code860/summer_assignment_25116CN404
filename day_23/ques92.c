//WAP TO FIND MAXIMUM OCCURING CHARACTER
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count,max=0;
    char s[50],ch;
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;s[j]!='\0';j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
            }
        if(count>max)
        {
            max=count;
            ch=s[i];
        }
    }
    printf("maximum occuring character=%c",ch);
    return 0;
}
