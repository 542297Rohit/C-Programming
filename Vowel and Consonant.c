#include<stdio.h>
#include<limits.h>
#include<conio.h>
void main() 
  {  
  char ch;
  clrscr();
  printf ("Enter an alphabet;") ;
  scanf("%C", & ch) ;
  if(ch=='A'||ch=='a') 
  printf("%C is a vowel", ch) ;
  if(ch=='E'||ch=='e') 
  printf("%C is a vowel", ch) ;
  if(ch=='I'||ch=='i')
  printf("%C is a vowel") ;
  if(ch=='O'||ch=='o') ;
  printf("%C is a vowel", ch) ;
  if(ch=='U'||ch=='u') 
  printf("%C is a vowel", ch) ;
  else
  printf("%C is a consonant ", ch) ;
  
  getch() ;
}
    