//WAP TO CREATE SALARY MANAGEMENT SYSTEMs
#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float basic,hra,da,total;
};
int main()
{
    struct employee e[50];
    int i,n;
    printf("enter the number of details:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter details of employee %d\n",i+1);
        printf("enter employee id:");
        scanf("%d",&e[i].id);
        printf("enter name:");
        scanf("%s",e[i].name);
        printf("enter basic salary:");
        scanf("%f",&e[i].basic);
        e[i].hra=0.20*e[i].basic;
        e[i].da=0.10*e[i].basic;
        e[i].total=e[i].basic+e[i].hra+e[i].da;
    }
    printf("SALARY DETAILS:");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d",i+1);
        printf("\nID:%d",e[i].id);
        printf("\nName:%s",e[i].name);
        printf("\nBasic Salary:%f",e[i].basic);
        printf("\nHRA:%f",e[i].hra);
        printf("\nDA:%f",e[i].da);
        printf("\nTotal Salary:%f",e[i].total);
    }
    return 0;
}
