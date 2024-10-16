#include<stdio.h>
int main(){
  int age ;
  char is_indian;

  printf("please enter your age ");
  scanf("%d", &age);

  printf(" are you indian citizen(Y/N):");
  scanf("%d",&is_indian);
    
    if (is_indian == 'Y' || (age >= 18 && age<70)) {
     
      printf("you are eligible for a licence :");
       
       } else {
       
        printf(" you are not eligible\n");

       }
}











  