//WAP TO CREATE MINI LIBRARY SYSTEMS
#include<stdio.h>
#include<string.h>
struct book
{
    int id;
    char name[50],author[50];
};
int main()
{
    int i,n;
    printf("ENTER NUMBER OF BOOKS:");
    scanf("%d",&n);
    struct book b[50];
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
    printf("\n-----LIBRARY RECORDS----\n");
    for(i=0;i<n;i++)
    {
        printf("\nBOOK ID:%d",b[i].id);
        printf("BOOK NAME:%s",b[i].name);
        printf("AUTHOR NAME:%s",b[i].author);
    }
    return 0;  
}
