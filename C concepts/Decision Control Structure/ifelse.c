#include<stdio.h>
int main(){
  int age ;
  printf("Welcome To RTO\n, please enter your age :");
  scanf("%d",&age);

  if(age >= 18) {
    printf("you are eligible for licence.\n");}
    else
     {
      printf("you are to young\n ,apply after you are 18 ");

    }
    printf("your age is: %d", &age);
    
    return 0;

}