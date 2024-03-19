#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no,tot_marks;
    char name[50];
}s[3];
int main()
{
    int i;
    printf("Enter the information about 3 students : ");
    for(i=0;i<3;i++)
    {
        s[i].roll_no=i+1;
        printf("\nRoll_no %d\n",s[i].roll_no);
        printf("Enter the student name: ");
        scanf("%s",s[i].name);
        printf("Enter the total marks : ");
        scanf("%d",&s[i].tot_marks);
        
    }

}