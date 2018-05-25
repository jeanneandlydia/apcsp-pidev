#include <stdio.h>
int main()
{
	int a = 0;
	int b = 3;
	printf("a = 0\n");
	printf("b = 3\n");
	if (a == 0)
	{
		printf("a is equal to 0\n");
	}
	else
	{
		printf("a is equal to 0\n");
	}
	if (b != a)
	{
		printf("b is not equal to a\n");
	}
	else
	{
		printf("b is equal to a\n");
	}
	if (a > b)
	{
		printf("a is greater than b\n");
	}
	else
	{
		printf("a is not greater than b\n");
	}
	int c = 7;
	int d = 7; 
	printf("c = 7\n");
	printf("d = 7\n");
	if (c >= d)
	{
		printf("c is greater than or equal to d\n");
	}
	else
	{
		printf("c is not greater than or equal to d\n");
	}
	if (c == 7 && d == 7)
	{
		printf("both c and  d are equal to 7\n");
	}
	else
	{
		printf("either c, d, or both are not equal to 7\n");
	}
	if (c == 7 || b == 7)
	{
		printf("either c, d, or both are equal to 7\n");
	}
	else
	{
		printf("either c, d, or both are not equal to 7\n");
	}
	if ( !(c == 7) )
	{
		printf("c is not equal to 7\n");
	}
	else
	{
		printf("c is equal to 7\n");
	}
}
