#include<stdio.h>
int main()
{
    int (*ptr[3])();
    ptr[0]=aaa;
    ptr[1]=bbb;
    ptr[2]=ccc;
    {
        (*ptr[2])();
    }
    aaa()
    {
        printf("aaa");
    }
    bbb()
    {
        printf("bbb");
    }
    ccc()
    {
        printf("ccc");
    }
}