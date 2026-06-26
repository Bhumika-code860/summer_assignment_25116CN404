//WAP TO CREATE NUMBER GUESSING GAME
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,g;
    srand(time(0));
    n=rand()%100+1;
    do
    {

        printf("enter your guess(1-100):");
        scanf("%d",&g);
        if(g>n)
        printf("too high!\n");
        else if(g<n)
        printf("too low!\n");
        else
        printf("very good! correct guess");
    }
    while (g!=n);
    return 0;
}
