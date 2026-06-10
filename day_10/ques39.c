//WAP TO PRINT NUMBER PYRAMID
#include<stdio.h>
int main()
{
    int i,j,k,c;
    for(i=1;i<=5;i++)
    {
        c=i-1;    
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(k=1;k<i;k++)
        {  
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
}
