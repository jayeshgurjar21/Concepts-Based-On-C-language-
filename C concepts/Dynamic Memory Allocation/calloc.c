#include<stdio.h>
#include<stdlib.h>
 
 int main(){
   int size;
   printf("enetr the number of element ");
   scanf("%d",&size);

   int *arr = (int*)calloc(size,sizeof(int) );
   
   for(int i = 0; i< size; i++ );{
   scanf("%d", &arr);
   }
   
   if (arr == NULL){
     printf(" not enough memory ");
     return 1;
   }


   long sum = 0;
   for(int i = 0; i < size; i++){
    sum += arr[i];
   }

   printf("the sum of all  element: %d", sum);
   return 0;

 }
