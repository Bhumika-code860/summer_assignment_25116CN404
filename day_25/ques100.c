//WAP TO SORT WORDS BY LENGTH
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char s[100],temp[100];
    printf("enter the number of words:");
    scanf("%d",&n);
    printf("enter words:");
    for(i=0;i<n;i++)
    gets(s[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(s[i])>strlen(s[j]))
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    printf("words sorted by length:\n");
    for(i=0;i<n;i++)
    printf("%s\n",s[i]);
    return 0;
}
