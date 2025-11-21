//Program for volume of a cylinder//
#include<stdio.h>
int main() 
  {
  float pi=3.14;
  float radius,height;
  int volume;
  printf("Enter radius\n");
  scanf("%f", & radius) ;
  printf ("Enter height\n") ;
  scanf("%f", & height) ;
  volume=pi*radius*radius*height;
  printf("The volume of cylinder is: %d\n", volume) ;
  return 0;
  }