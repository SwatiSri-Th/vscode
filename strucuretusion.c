#include<stdio.h>
#include<string.h>
struct student
{
    int roll , marks;
    char name[50];
}student1;
int main()
{
    printf("Enter the roll number: ");
    scanf("%d",&student1.roll);
    printf("Enter the name : ");
    scanf("%s",student1.name);
    printf("Enter the marks : ");
    scanf("%d",&student1.marks);

    printf("Roll number is %d",student1.roll);
    printf("\nName is %s",student1.name);
    printf("\nMarks is %d",student1.marks);
    
}
