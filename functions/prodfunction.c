#include<stdio.h>
#include<conio.h>
int prod(int,int);
main()
{
	int a,b,c;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	c=prod(a,b);
	printf("The multiplication of two numbers is=%d",c);
}
int prod(int x,int y)
{
	return x*y;
}
