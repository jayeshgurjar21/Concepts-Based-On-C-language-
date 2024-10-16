#include<stdio.h>

int main (){
  char gender;
  printf("please enter your gender (m/f):");
  scanf("%d" ,&gender);

  gender == 'm', 'f' ? printf("male") : printf("female");
  return 0;
}


