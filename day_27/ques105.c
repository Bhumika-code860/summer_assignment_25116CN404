//WAP TO CREATE STUDENT RECORD MANAGEMENT SYSTEMs
#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    struct student s[50];
    int i,n;
    printf("enter the number of details:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter roll no:");
        scanf("%d",&s[i].rollno);
        printf("enter name:");
        scanf("%s",s[i].name);
        printf("enter marks:");
        scanf("%f",&s[i].marks);
    }
    printf("STUDENT'S DETAILS:");
    for(i=0;i<n;i++)
    {
        printf("\nStudent %d",i+1);
        printf("\nRoll no:%d",s[i].rollno);
        printf("\nName:",s[i].name);
        printf("\nMarks",s[i].marks);
    }
    return 0;
}
