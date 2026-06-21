//WAP TO COUNT VOWELS AND CONSONANTS
#include<stdio.h>
int main()
{
    int i,vowel=0,consonants=0;
    char s[50],temp;
    printf("enter the string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='a'&&s[i]<='z')||s[i]>='A'&&s[i]<='Z')
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            vowel++;
            else
            consonants++;
        }
    }
    printf("No of vowels is %d\n",vowel);
    printf("no of consonants is %d",consonants);
    return 0;
}
