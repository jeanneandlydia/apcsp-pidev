#include <stdio.h>

 float areaOfCircle (float i)
{
	float x;
	x = 3.14 * i * i;
	printf("%f\n", x);
	return x;
}
 int main()
{
	char input [256];
	float i;

	printf("\nEnter a number for the range: ");
	fgets(input, 256, stdin);
	sscanf (input, "%d", &i);
	areaOfCircle (i);

	printf("\nEnter another number: ")
	fgets(input, 256, stdin);
	sscanf (input, "%d",&i);
	areaOfCircle (i);
	

}




