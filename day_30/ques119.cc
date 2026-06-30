//WAP TO CREATE MINI EMPLOYEE MANAGEMENT SYSTEM
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    int i,n;
    printf("ENTER NUMBER OF EMPLOYEES:");
    scanf("%d",&n);
    struct employee e[50];
    for(i=0;i<n;i++)
    {
        printf("\nEMPLOYEE %d\n",i+1);
        printf("ID:");
        scanf("%d",&e[i].id);
        printf("NAME:");
        scanf("%s",e[i].name);
        printf("SALARY:");
        scanf("%f",&e[i].salary);
    }
    printf("\n-----EMPLOYEE RECORDS----\n");
    for(i=0;i<n;i++)
    {
        printf("\nID:%d",e[i].id);
        printf("\nNAME:%s",e[i].name);
        printf("\nSALARY:%f",e[i].salary);
    }
    return 0;  
}
