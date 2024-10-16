#include<stdio.h>

struct student {
  int rollno;
  char name[10];
  float marks;
};

int main(){
  struct student student [5] = {
    {1,"ram",46},
    {2,"shyam",45.5},
    {3,"geeta",55},
    {4,"sohan",85.2},
  };
  for(int i = 0; i < 5; i++)
  {
    printf("\nstudent name: %s, name: %s,rollno %d, marks: %.2f", student[i].name, student[i].rollno,student[i].marks);

  }

}