#include <stdio.h>
#include <math.h>

float areaOfCircle (float radius)
{
	float area;
	area = PI * radius * radius;
	printf("%f\n", area);
	return x;
}
 int main()
{
	char input [256];
	float radiusmin, radiusmax;
	printf("\nEnter the minimum value for the range of the radius: ");
	fgets(input, 256, stdin);
	sscanf (input, "%f", &radiusmin);
	printf("\nEnter the maximum value for the range of the radius: ");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &radiusmax);
	printf("The area of the circle will range from %f to %f", areaOfCircle(radiusmin), areaOfCircle(radiusmax));

}




