//WAP TO CREATE STUDENT RECORD SYSTEMS USING ARRAYS AND STRINGS
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    int i,n;
    printf("ENTER NUMBER OF STUDENTS:");
    scanf("%d",&n);
    struct student s[50];
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
    printf("\n-----STUDENT RECORDS----\n");
    for(i=0;i<n;i++)
    {
        printf("\nROLL NO:%d",s[i].roll);
        printf("\nNAME:%s",s[i].name);
        printf("\nMARKS:%f",s[i].marks);
    }
    return 0;  
}
