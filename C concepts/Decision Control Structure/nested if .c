#include<stdio.h>
int main(){
  int age ;
  char is_indian ;
  printf("Welcome To RTO\n, please enter your age :");
  scanf("%d",&age);
  printf(" are you indian citizen (Y/N)");
  scanf(" %c", &is_indian);

  if(is_indian=='Y'){
      
    if(age >= 18) {
    printf("you are to young\n ,apply after you are 18 ");
     }
    else if (age >70 ){
      printf(" you are senior, you cannot apply for licence .\n");
    }
    else{
      printf("you are eligible for licence.\n");
      }
      
} else{
        printf("only indian citizen can apply");
      }
    }


      
     
    

     
  
