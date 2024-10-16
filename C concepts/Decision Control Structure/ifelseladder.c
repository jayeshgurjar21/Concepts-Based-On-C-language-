#include<stdio.h>
int main(){
  int age ;
  printf("Welcome To RTO\n, please enter your age :");
  scanf("%d",&age);
  
  if(age >= 18) {
    printf("you are to young\n ,apply after you are 18 ");
     }
    else if(age >70 ){
      printf(" you are senior, you cannot apply for licence .\n");
    }
    else{
      printf("you are eligible for licence.\n");
      }
      return 0;
    }
     
  
