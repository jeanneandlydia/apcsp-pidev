#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float c;
  float d;
  c = 1.2;
  printf("The value of c is %3.0f\n", c);
  printf("The address of c is %d\n", &c);
  d = 2.3;
  printf("The value of d is %3.0f\n", d);
  printf("The address of d is %d\n", &d);

  float* ptrtoc;
  ptrtoc = &c;
  float* ptrtod;
  ptrtod = &d;

  float temp;
  temp = *ptrtoc;
  *ptrtoc = *ptrtod;
  *ptrtod = temp;
printf("The value of c is now %3.0f\n", c);
printf("The value of d is now %3.0f\n", d);
 
}

