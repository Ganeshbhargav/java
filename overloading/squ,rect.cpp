// program for findig area and perimeter for square and rectangle using fuction overloading

#include<stdio.h>
#include<conio.h>
int area(int); //for square 
int peri(int);
int area(int,int); //for rectangle
int peri(int,int);

main()
{
	int side,l,b,c,d;
	printf("Enter the side for the square");
	scanf("%d",&side);
	c=area(side);
	printf("Area of square is = %d\n",c);
	d=peri(side);
	printf("Perimeter of square is= %d\n",d);
	printf("Enter length and breadth of the rectangle");
	scanf("%d%d",&l,&b);
	c=area(l,b);
	printf("Area of the rectangle is =%d\n",c);
	d=peri(l,b);
	printf("Perimeter of the rectangle is = %d\n",d);
}
int area (int x)
{
	return x*x;
}
int peri (int y)
{
	return 4*y;
}
int  area(int p, int q)
{
	return p*q;
}
int  peri(int ding,int dong)
{
	return 2*(ding+dong);
}
