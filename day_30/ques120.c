//WAP TO DEVELOP COMPLETE MINI PROJECT USING ARRAYS,STRINGS AND FUNCTIONS
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
void input(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nSTUDENT %d\n",i+1);
        printf("ROLL NO:");
        scanf("%d",&s[i].roll);
        printf("NAME:");
        scanf("%s",s[i].name);
        printf("MARKS:");
        scanf("%f",&s[i].marks);
    }
}
void display(struct student s[],int n)
{
    int i;
    printf("\n-----STUDENT RECORDS----\n");
    for(i=0;i<n;i++)
    {
        printf("\nROLL NO:%d",s[i].roll);
        printf("\nNAME:%s",s[i].name);
        printf("\nMARKS:%f",s[i].marks);
    }
}
int main()
{
    int n;
    printf("enter no of students:");
    scanf("%d",&n);
    struct student s[n];
    input(s,n);
    display(s,n);
    return 0;  
}
