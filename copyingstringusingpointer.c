#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    char *a,*b;
    printf("Enter the string : ");
    gets(s1);
    a=s1;
    b=s2;

    while(*a!='\0');
    {
        *b=*a;
        a++;
        b++;
    }
    *b='\0';
    printf("\nThe copied string is %s",s2);
    return 0;
}