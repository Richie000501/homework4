#include<stdio.h>
int addbyone(int& x);
int main()
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
}
int addbyone(int& xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}