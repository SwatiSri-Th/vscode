#include<stdio.h>
#include<string.h>
int main()
{
    char st[20];
    char *p;
    int count=0;
    printf("Enter the string : ");
    gets(st);
    p=st;
    
    for(p;*p!='\0';p++)
    switch(*p)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        count ++;
        break;
    }
    printf("No. of vowels are %d",count);
    
}