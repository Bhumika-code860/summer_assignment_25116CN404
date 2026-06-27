//WAP TO CREATE MARKSHEET GENERATION SYSTEM
#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
    int m1,m2,m3,m4,m5,total;
    float percentage;
};
int main()
{
    struct student s;
    printf("enter roll no:");
    scanf("%d",&s.rollno);
    printf("enter name:");
    scanf("%s",s.name);
    printf("enter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&s.m1,&s.m2,&s.m3,&s.m4,&s.m5);
    s.total=s.m1+s.m2+s.m3+s.m4+s.m5;
    s.percentage=s.total/5.0;
    printf("MARKSHEET:");
    printf("\nROLL NO: %d",s.rollno);
    printf("\nNAME:%s",s.name);
    printf("\nSUBJECT 1:%d",s.m1);
    printf("\nSUBJECT 2:%d",s.m2);
    printf("\nSUBJECT 3:%d",s.m3);
    printf("\nSUBJECT 4:%d",s.m4);
    printf("\nSUBJECT 5:%d",s.m5);
    printf("\nTOTAL MARKS:%d",s.total);
    printf("\nPERCENTAGE:%d",s.percentage);
    if(s.percentage>=90)
    printf("GRADE A");
    else if(s.percentage>=75)
    printf("GRADE B");
    else if(s.percentage>=60)
    printf("GRADE C");
    else if(s.percentage>=40)
    printf("GRADE D");
    else
    printf("FAIL");
    return 0;
}
