#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);

main()
{
	int a,b,c,ch;
	float x;
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Divison\n");
	printf("4. Multiplication\n");
	printf("\t********Enter your choice*********\n");
	scanf("%d",&ch);
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	
	switch(ch)
	{
		case 1:	
			c=sum(a,b);
			printf("Addition of two numbers=%d",c);
			break;
		case 2:
			c=sub(a,b);
			printf("Subtraction of two numbers=%d",c);
			break;
		case 3:
			x=div(a,b);
			printf("Divison of two numbers=%d",x);
			break;
		case 4:
			c=mul(a,b);
			printf("Multiplication of two numbers=%d",c);
			break;	
	}
    
  
}
  int sum( int x, int y)
    {
    	return x+y;
	}
   int sub(int p, int q)
	{
		return p-q;
	}
	int mul(int r, int e)
	{
		return r*e;
	}
	float div(int che,int po)
	{
		return che/po;
	}
