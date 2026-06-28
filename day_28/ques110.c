//WAP TO CREATE BANK ACCOUNT SYSTEM
#include<stdio.h>
int main()
{
    int acc,choice;
    char name[50];
    float balance,amount;
    printf("enter account number:");
    scanf("%d",&acc);
    printf("enter name:");
    scanf("%s",name);
    printf("enter initial balance:");
    scanf("%f",&balance);
    do
    {
        printf("\n1.DEPOSIT");
        printf("\n2.WITHDRAW");
        printf("\n3.CHECK BALANCE");
        printf("\n4.EXIT");
        printf("\nENTER CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter deposit amount:");
            scanf("%f",&amount);
            balance=balance+amount;
            break;
            case 2:
            printf("enter withdraw amount:");
            scanf("%f",&amount);
            if(amount<=balance)
            balance=balance-amount;
            else
            printf("insufficient balance");
            break;
            case 3:
            printf("current balance:%f",balance);
            break;
            case 4:
            printf("thankyou");
            break;
            default:
            printf("invalid choice");
            
        }
        
    } 
    while (choice!=4);
    return 0;  
}
