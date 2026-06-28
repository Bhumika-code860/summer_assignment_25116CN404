//WAP TO CREATE TICKET BOOKING SYSTEM
#include<stdio.h>
int main()
{
    int book,choice,seats=600;
    do
    {
        printf("\n1.BOOK TICKETS");
        printf("\n2.CHECK AVAILABLE SEATS");
        printf("\n3.EXIT");
        printf("\nENTER CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("HOW MANY TICKETS?:");
            scanf("%d",&book);
            if(book<=seats)
            {
                seats=seats-book;
                printf("BOOKING SUCCESSFUL");
            }
            else
            {
                printf("SEATS NOT AVAILABLE");
            }
            break;
            case 2:
            printf("AVAILABLE SEATS:%d",seats);
            break;
            case 3:
            printf("THANK YOUU");
            break;
            default:
            printf("invalid choice");
        }
    } 
    while (choice!=3);
    return 0;  
}
