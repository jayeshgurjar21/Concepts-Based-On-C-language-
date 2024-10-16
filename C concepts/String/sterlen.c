#include<stdio.h> 
#include<string.h>

int main(){
   char name[50];
   printf("please enter your name :");
   fgets(name,50,stdin);//for input

   int size = strlen(name);//strlen
   printf("the length of your name is: %d", size);

}
