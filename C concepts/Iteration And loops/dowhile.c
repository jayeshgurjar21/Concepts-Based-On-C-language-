#include<stdio.h>
int main (){

 int i = 1;
 do {
  printf("%d\n", i);
  i++;
 } while ( i <=10);

 int num;
 do {
 printf("please enter the number :");
 scanf("%d",&num);
} while ( num != 10);

printf("congrats you have gussed the correct number ");
  
  return 0;
}
