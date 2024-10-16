#include<stdio.h> 
#include<string.h>

int main(){
   char name[50];
   printf("please enter your name :");
   fgets(name,50,stdin);//for input

   char new_name[50];
   strcpy(new_name, name);//strcpy input
   printf("%s has been copied to %s,name , new_name");
   

}
