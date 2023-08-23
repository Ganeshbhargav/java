#include<stdio.h>
float div(float,float);
main()
{
	float a,b;
	float c;
	printf("Enter any two numbers");
	scanf("%f%f",&a,&b);
	c=div(a,b);
	printf("The divison of two numbers is = %f",c);
}
float div(float x, float y)
{
	return x/y;
}
