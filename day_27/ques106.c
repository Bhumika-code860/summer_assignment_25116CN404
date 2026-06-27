//WAP TO CREATE EMPLOYEE MANAGEMENT SYSTEMs
#include<stdio.h>
struct employee
{
    int id;
    int age;
    char name[50];
    float salary;
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
        printf("enter age:");
        scanf("%d",&e[i].age);
        printf("enter salary:");
        scanf("%f",&e[i].salary);
    }
    printf("EMPLOYEE'S DETAILS:");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d",i+1);
        printf("\nID:%d",e[i].id);
        printf("\nName:%s",e[i].name);
        printf("\nAge:%d",e[i].age);
        printf("\nSalary:%f",e[i].salary);
    }
    return 0;
}
