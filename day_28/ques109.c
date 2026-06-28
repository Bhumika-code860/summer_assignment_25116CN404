//WAP TO CREATE LIBRARY MANAGEMENT SYSTEM
#include<stdio.h>
struct book
{
    int id;
    char name[50],author[50];
};
int main()
{
    struct book b[50];
    int i,n;
    printf("enter the number of books:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nBOOK %d\n",i+1);
        printf("BOOK ID:");
        scanf("%d",&b[i].id);
        printf("BOOK NAME:");
        scanf("%s",b[i].name);
        printf("AUTHOR NAME:");
        scanf("%s",b[i].author);
    }
    printf("--------LIBRARY RECORDS--------");
    for(i=0;i<n;i++)
    {
       printf("\nBOOK ID:%d",b[i].id);
       printf("\nBOOK NAME:%s",b[i].name);
       printf("\nAUTHOR:%s",b[i].author);
    }
    return 0;
}
