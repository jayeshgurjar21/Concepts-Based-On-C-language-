#include<stdio.h>

int main(){
  int num = 1;//initialization//

  while ( num <= 10)//condition//
  {  printf("%d\n", num);
     num++; //update//

  }
  printf("first loop has been ended ");

  int num2 = 100;//initialization//

  while(num2>0)//condition//
  {
    printf("%d\n", num2);
    num2--; //updation for reversing or subtract//
  }
  
   printf("second loop has been ended ");

   return 0;
}