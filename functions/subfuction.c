#include<stdio.h>
#include<conio.h>
int sub(int,int);
main()
{
	int a,b,c;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	c=sub(a,b);
	printf("Subtraction of %d and %d is = %d",a,b,c);
}
int sub(int x, int y)
{
	int z;
	z=x-y;
	return z;
}
