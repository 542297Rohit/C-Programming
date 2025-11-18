#include<stdio.h>
#include<limits.h>
#include<conio.h>
void main() 
  {  
  clrscr();
  int a, b, sum, sub, mul, div, mod;
  printf("Enter a:") ;
  scanf("%d", & a) ;
 printf("Enter b:") ;
  scanf("%d", & b) ;
  sum=a+b;
  
  sub=a-b;
  
  mul=a*b;
  
  div=a/b;
  
  mod=a%b;
  
  printf("The sum is: %d", sum) ;
  
  printf("The sub is: %d", sub) ;
  
  printf("The mul is: %d", mul) ;
  
  printf("The div is: %d", div) ;
  
  printf("The mod is: %d", mod) ;
}