//WAP TO CREATE VOTING ELIGIBILITY SYSTEM
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18)
    printf("eligible for voting\n");
    else
    printf("not eligible for voting");
    return 0;
}
