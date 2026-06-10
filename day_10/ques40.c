//WAP TO PRINT CHARACTER PYRAMID
#include<stdio.h>
int main()
{
    int i,j,k,c;
    for(i=65;i<=69;i++)
    {
        c=i-1;    
        for(j=i;j<69;j++)
        {
            printf(" ");
        }
        for(k=65;k<=i;k++)
        {
            printf("%c",k);
        }
        for(k=65;k<i;k++)
        {  
            printf("%c",c);
            c--;
        }
        printf("\n");
    }
}
