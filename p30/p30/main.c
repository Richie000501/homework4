#include <stdio.h>
#include <stdlib.h>

void inverse(int*);
int main()
{
	int a[3] = { 3,5,7 };
	int i;
	for (i = 0; i <= 2; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

	inverse(&a);

	for (i = 0; i <= 2; i++)
	{
		printf("%d  ", a[i]);
	}
}
void inverse(int* b)
{
	int tmp[3], i;
	for (i = 0; i < 3; i++)
	{
		tmp[2 - i] = b[i];
	}
	for (i = 0; i < 3; i++)
	{
		b[i] = tmp[i];
	}
}