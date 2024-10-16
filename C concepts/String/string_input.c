#include<stdio.h>
int main(){
  char name[55];
   printf("please enter your name :");
   fgets(name,sizeof(name),stdin);//for input 
   puts(name);
   printf("good morning :");
   puts(name);//for output 
  
  return 0;
}