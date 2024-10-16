#include<stdio.h>  

// function to try to swap the two numbers
void swap(int , int );

int main()
{
  int x = 4;
  int y = 55;
  printf("x: %d","y: %d", x, y);
  swap (x,y);//attempt to swap x and y 
  printf("\n:%d",x,y);
  return 0;

}

 void swap(int first, int second)// function calling 
 {
  printf("\n first :%d", "second :%d",first , second );
  int temp = first ;
  first = second;
  second = temp;
  printf(" \nfirst :%d", "second :%d",first , second );// final printing statements
 }