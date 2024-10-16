#include<stdio.h>
int main(){
  int num;
  printf(" welcome to printing of tables ");
  printf("please enter the number ");
  scanf("%d", &num);

   for( int i=1; i <= 10; i++){
    printf("%d X %d = %d\n", num , i , num * i);
   }
}