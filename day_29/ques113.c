//WAP TO CREATE MENU-DRIVEN CALCULATOR
#include<stdio.h>
int main()
{
    int choice;
    float a,b;
    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("\n1.ADDITION");
    printf("\n2.SUBTRACTION");
    printf("\n3.MULTIPLICATION");
    printf("\n4.DIVISION");
    printf("\nENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("%f",a+b);
        break;
        case 2:
        printf("%f",a-b);
        break;
        case 3:
        printf("%f",a*b);
        break;
        case 4:
        printf("%f",a/b);
        break;
        default:
        printf("INVALID CHOICE");
    }
    return 0;  
}
