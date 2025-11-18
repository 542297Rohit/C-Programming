#include<stdio.h>
#include<limits.h>
#include<conio.h>
void main() 
  {  
  clrscr();
  int a, b,c;
  printf("Enter the value of a, b, c:") ;
  scanf("%d%d%d", &a,&b,&c) ;
  if(a>c && a>b) 
  printf("a is the largest") ;
  else if(b>a && b>c) 
  printf("b is the largest") ;
  else
  printf("c is the largest") ;
  getch() ;
}
    