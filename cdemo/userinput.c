#include <stdio.h>
#include <math.h>

float areaOfCircle (float radius)
{
	float area;
	area = 3.14 * radius * radius;
	printf("%f\n", area);
	return area;
}
 int main()

{
	char input [256];
	float radiusmin, radiusmax;
	printf("Enter the minimum value for the range of the radius: \n");
	fgets(input, 256, stdin);
	sscanf (input, "%f", &radiusmin);

	printf("Enter the maximum value for the range of the radius: \n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &radiusmax);
	printf("The area of the circle will range from %f to %f.\n", areaOfCircle(radiusmin), areaOfCircle(radiusmax));

	printf("Possible values for area of circle in that range include: \n");
	for (float i = radiusmin; i <= radiusmax; i++)
	{
	areaOfCircle (i);
	}
}




