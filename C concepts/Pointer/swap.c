#include<stdio.h>
// call by reference eg:
void swap(int*, int*);
 
 int main()
 {
  int x= 4;
  int y = 55;
  printf("\nvalue of x=%d, value of y=%d, x ,y");
  
  swap(&x,&y);
 
  printf("\nvalue of x=%d, value of y=%d, x ,y");

 }
 void swap(int*ptr1,int*ptr2)
 {
   printf("\nvalue of ptr`=%d, value of ptr2=%d", *ptr1,*ptr2);

   int temp = *ptr1;
   *ptr1 = *ptr2;
   *ptr2 = temp ;

   printf("\n value of ptr1=%d, value of ptr2=%d", *ptr1 ,*ptr2);
 }
