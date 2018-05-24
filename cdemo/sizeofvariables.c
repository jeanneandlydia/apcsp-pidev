#include <stdio.h>

int main()
{
	int a = 10;
	printf("Var a is an int and has a size of %d bytes\n", sizeof(a));
	char b = 'A';
	printf("Var is a char and has a size of %d bytes\n", sizeof(b));
	float c = 1.2;
	printf("Var c is a float and has a size of %d bytes \n", sizeof(c));
	double d = 10.21;
	printf("Var d is a double and has a size of %d bytes \n", sizeof(d));
}

