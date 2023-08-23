
#include<stdio.h>

char cat(char,char,char); //for square 
char cat(char,char);

main()
{
	char st1,st2,st3,st4,st5;
	printf("Enter the any two strings\n");
	scanf(" %c%c",&st1,&st2);
	cat(st1,st2);
	printf("Enter any three strings\n");
	scanf(" %c %c %c",&st3,&st4,&st5);
	cat(st3,st4,st5);
}
char cat(char x, char y)
{
	printf("The cat of the two strings is = %c\n",x+y);
}
char cat(char p,char q,char r)
{
	printf("The cat of the three strings is = %c",p+q+r);
}
