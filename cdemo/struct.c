#include <stdio.h>
#include <string.h>

struct Student {
	char firstname[30];
	char lastname[30];
	int age;
	int studentid;
};

void printStudent(struct Student* student)
{
	printf("The following are the details for student %s %s\n", student->firstname, student->lastname);
	printf("age: %d\n",student->age);
	printf("student ID: %d\n", student->studentid);
}
