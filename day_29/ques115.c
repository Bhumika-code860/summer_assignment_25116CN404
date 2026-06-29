//WAP TO CREATE MENU-DRIVEN STRING OPERATION SYSTEM
#include<stdio.h>
#include<string.h>
int main()
{
    int choice;
    char s[100];
    printf("enter a string:");
    gets(s);
    printf("\n1.LENGTH");
    printf("\n2.REVERSE");
    printf("\n3.UPPERCASE");
    printf("\nENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("length is:%d",strlen(s));
        break;
        case 2:
        printf("reverse is %s",strrev(s));
        break;
        case 3:
        printf("uppercase is %s",strupr(s));
        break;
        default:
        printf("INVALID CHOICE");
    }
    return 0;  
}
