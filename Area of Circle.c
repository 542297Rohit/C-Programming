#include<stdio.h>
int main() 
  {
  float pi=3.14;
  float radius,  circumference, area;
  printf("Enter radius\n");
  scanf("%f", & radius) ;
  circumference= 2*pi*radius;
  printf("The circumference is: %.2f\n", circumference) ;
  area = pi*radius*radius;
  printf("The area of the circle is :%.2f\n", area);
  return 0;
  }