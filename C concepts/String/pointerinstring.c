#include<stdio.h>
int main()
{
  char name []= "jayesh";

  printf("array: before modifying :%s\n", name );

  name[4]='k';
// it is modifying 
  printf("array: after  modifying :%s\n", name );

  char *nickname []= "jayesh";

  printf("pointer : before modifying :%s\n", name );
//it not proccesing modifying 
  printf("pointer : after  modifying :%s\n", name );

}