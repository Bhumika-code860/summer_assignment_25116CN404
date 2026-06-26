//WAP TO CREATE ATM SIMULATION
#include<stdio.h>
int main()
{
    int c;
    float balance=10000,amount;
    do
    {
        printf("\n1.CHECK BALANCE:");
        printf("\n2.DEPOSIT:");
        printf("\n3.WITHDRAW:");
        printf("\n4.EXIT:");
        printf("\nenter choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("BALANCE=%f\n",balance);
            case 2:
            printf("enter the amount to deposit:");
            scanf("%f",amount);
            printf("amount deposited.\n");
            break;
            case 3:
            printf("enter the amount to withdraw:");
            scanf("%f",&amount);
            if(amount<=balance)
            {
                balance-=amount;
                printf("amount withdrawn");
            }
            else
            {
                printf("insufficient amount");
            }
            break;
            case 4:
            printf("thankyouuuu");
            break;
            default:
            printf("invalid choice:");
        }
 
    }
    while (c!=4);
    return 0;
}
