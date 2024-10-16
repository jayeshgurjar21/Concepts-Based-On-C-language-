#include<stdio.h>
 int main(){
   int marks[6] = {90,65,45,45,85,44};// array declaretion and initialization  

   printf(" please enter the marks of student 1:" );
   scanf(" %d", &marks[0]);

   printf(" please enter the marks of student 2:" );
   scanf(" %d", &marks[1]);

   printf(" please enter the marks of student 3:" );
   scanf(" %d", &marks[2]);

   printf(" please enter the marks of student 4:" );
   scanf(" %d", &marks[3]);

   printf(" please enter the marks of student 5:" );
   scanf(" %d", &marks[4]);

   printf(" please enter the marks of student 6:" );
   scanf(" %d", &marks[5]);

   printf("\nmarks of student 1: %d", marks[0]);
   
   printf("\nmarks of student 2: %d", marks[1]);
   
   printf("\nmarks of student 3: %d", marks[2]);
   
   printf("\nmarks of student 4: %d", marks[3]);
   
   printf("\nmarks of student 5: %d", marks[4]);
   
   printf("\nmarks of student 6: %d", marks[5]);
   
   return 0;
 }    