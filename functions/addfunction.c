#include<stdio.h>
#include<conio.h>
int sum(int,int);
main()
{
	int a,b,c;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("Addition of two numbers= %d",c);
}
int sum(int x,int y)
{
	return x+y;

}
