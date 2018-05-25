#include <stdio.h>

int main()
{
	int a = 10;
	printf("Var a is an int and has a size of %d bytes\n", sizeof(a));
	char b = 'A';
	printf("Var b is a char and has a size of %d bytes\n", sizeof(b));
	float c = 1.2;
	printf("Var c is a float and has a size of %d bytes \n", sizeof(c));
	double d = 10.21;
	printf("Var d is a double and has a size of %d bytes \n", sizeof(d));
	unsigned char e = 'E';
	printf("Var e is an unsigned char and has a size of %d bytes\n", sizeof(e));
	long int f = 1;
	printf("Var f is an long int and has a size of %d bytes\n", sizeof(f));
}

