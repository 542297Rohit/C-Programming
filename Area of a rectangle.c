#include<stdio.h>
void main() 
  {
  int length, breadth, area;
  printf("Enter length\n");
  scanf("%d", & length) ;
  
  printf("Enter breadth\n") ;
  scanf("%d", & breadth) ;
  area= length*breadth;
  printf("The area of the rectangle is :%d", area);
  }