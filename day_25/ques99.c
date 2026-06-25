//WAP TO SORT NAMES ALPHABETICALLY
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char s[100],temp[100];
    printf("enter the number of names:");
    scanf("%d",&n);
    printf("enter names:");
    for(i=0;i<n;i++)
    gets(s[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    printf("names in alphabetical order:\n");
    for(i=0;i<n;i++)
    printf("%s\n",s[i]);
    return 0;
}
