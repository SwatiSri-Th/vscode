#include<stdio.h>
int main()
{

int n,j,i;
printf("Enter the number :");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
j=n*i;
	printf("%d*%d=%d\n",n,i,j);
}
 return 0;
}
