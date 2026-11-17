#include<stdio.h>
int main()
{
    int grade,Total_Number;
    printf("\nWelcome to Exam Result");
    printf("\nEnter your total number");
    scanf("%d",&Total_Number);
    if(grade>70)
    {
        printf("Congratulations! you have got grade A");
    }
    else if(grade>60)
    {
        printf("Congartulations! ypu have got garde B");
    }
    else if(garde>40)
    {
        printf("Congratulations! you have got garde C");
    }
    else if(garde>33)
    {
        printf("You are passed");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}