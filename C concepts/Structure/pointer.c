#include<stdio.h>

struct student 
{
  int rollno;
  char name[10];
  float amrks;

};

int main()
{
  int a=5;
  int *ptr =&a;

  struct student student ={1, "ram",45.5};
  struct student *stu_ptr = &student;
 
  return 0;
}