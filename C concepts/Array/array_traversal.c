#include<stdio.h>
 int main(){
   int marks[6] = {90,65,45,45,85,44};// array declaretion and initialization  

   for(int i = 0;i < 5;i++){
    printf("\nmarks of student %d are : %d",(i + 1),marks[i]);//array traversal 

   }
   return 0;
 }    