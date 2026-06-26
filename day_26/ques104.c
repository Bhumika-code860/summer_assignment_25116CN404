//WAP TO CREATE QUIZ APPLICATION
#include<stdio.h>
int main()
{
    int ans,score=0;
    float balance=10000,amount;
    printf("\nQ1.CAPITAL OF INDIA:");
    printf("1.DELHI 2.MUMBAI 3.KOLKATA 4.CHENNAI\n");
    scanf("%d",&ans);
    if(ans==1)
    score++;
    printf("\nQ2.5+3=?:");
    printf("1.6 2.7 3.8 4.9\n");
    scanf("%d",&ans);
    if(ans==3)
    score++;
    printf("\nQ3.WHICH LANGUAGE IS ALSO KNOWN AS MOTHER PROGRAMMING LANGUAGE:");
    printf("1.C 2.JAVA 3.PYTHON 4.C++\n");
    scanf("%d",&ans);
    if(ans==1)
    score++;
    printf("your score is %d",score);
    return 0;
}
