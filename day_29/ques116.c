//WAP TO CREATE MENU-DRIVEN STRING OPERATION SYSTEM
#include<stdio.h>
#include<string.h>
int main()
{
    int id,qty;
    char name[100];
    float price;
    printf("ENTER PRODUCT ID:");
    scanf("%d",&id);
    printf("ENTER PRODUCT NAME:");
    scanf("%s",name);
    printf("ENTER QUANTITY:");
    scanf("%d",&qty);
    printf("ENTER PRICE:");
    scanf("%f",&price);
    printf("\n---------------INVENTORY DETAILS-------------\n");
    printf("PRODUCT ID:%d\n",id);
    printf("PRODUCT NAME:%s",name);
    printf("QUANTITY:%d\n",qty);
    printf("PRICE:%f\n",price);
    printf("TOTAL:%f\n",qty*price);
    return 0;  
}
