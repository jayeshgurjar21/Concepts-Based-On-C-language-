#include<stdio.h>

void count_to_100();// function prototype
int sum (int, int);

int main(){
  count_to_100();// function call
  count_to_100();
  int add = sum(4 , 5);// arguments 
  printf("\nthe sum is : %d", add);

  int x = 58;
  int y = 66;
  int z = sum(x,y);
  printf("\n\nthe sum is : %d", z);
  return 0; 

}

void count_to_100(){ // function defination 
  for(int i = 1; i <= 100; i++)
  {
    printf("%d\n",i);
  }
}

 int sum(int first , int second)//parameters
 {
  int addition = first + second;
  return addition;
 }
