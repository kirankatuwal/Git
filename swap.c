#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b=10,x=0;
	x=a;
	a=b;
	b=x;
	printf("The value is NOW CHANGED !!! ");
	printf(a);
	printf(b);
	getch();
}

