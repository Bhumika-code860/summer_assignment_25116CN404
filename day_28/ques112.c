//WAP TO CREATE CONTACT MANAGEMENT SYSTEM
#include<stdio.h>
struct contact
{
    char name[50],phone[10];
};
int main()
{
    struct contact c[50];
    int i,n;
    printf("enter number of contacts:");
    scanf("%d",&n);
    printf("enter details:");
    for(i=0;i<n;i++)
    {

        printf("\nCONTACT %d",i+1);
        printf("NAME:");
        scanf("%s",c[i].name);
        printf("PHONE NUMBER:");
        scanf("%s",c[i].phone);
    }    
    printf("CONTACT LIST:\n");
    for(i=0;i<n;i++)
    {
        printf("\nNAME:%s",c[i].name);
        printf("\nPHONE NUMBER:%s",c[i].phone);
    }    
    return 0;  
}
