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
	float i;
	printf("\nEnter the radius: ");
	scanf("%f", i);
	{
		areaOfCircle(i);
	}

}
