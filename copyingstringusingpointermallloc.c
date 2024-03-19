#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s1 ,*s2;
    s1=(char *)malloc(50);
    s2=(char *)malloc(50);
    printf("Enter a string : ");
    gets(s1);
    while (*s1!='\0')
    {
        *s2=*s1;
        s1++;
        s2++;
    }
    *s2='\0';
    printf("The copied string is %s",s2);
    return 0;
}