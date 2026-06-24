//WAP TO CHECK STRING ROTATION
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],temp[100];
    printf("enter the first string:");
    gets(s1);
    printf("enter the second string:");
    gets(s2);
    if(strlen(s1)!=strlen(s2))
    {
        printf("strings are not rotation of each other");
    }
    strcpy(temp,s1);
    strcat(temp,s1);
    if(strstr(temp,s2)!=NULL)
    {
        printf("strings are rotation of each other");
    }
    else
    printf("strings are not rotation of each other");
    return 0;
}
