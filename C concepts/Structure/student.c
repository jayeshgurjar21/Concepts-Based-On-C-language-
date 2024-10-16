#include<stdio.h>

struct student{
  int rollno;
  char name [10];
  float marks ;

};
 
 int main() {
  struct student student1 ;
  printf("please enter student details ");
  printf("enetr the roll number :");
  scanf( "%d", &student1.rollno);
 printf("please enter the name ");
  scanf(" %9s",student1.name);
  printf("please enter the marks ");
  scanf(" %f",student1.marks);

   
 }
