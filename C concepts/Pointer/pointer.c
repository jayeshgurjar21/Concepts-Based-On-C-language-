#include<stdio.h>

int main ()
{
  int i = 3;//defined value

  int *j;
  j = &i; //pointer declaration


  int **k;//pointer to pointer 
  k= &j;



  printf("\nadress of i = %p", &i);
  printf("\nadress of j = %p", &j);
  printf("\nvalue of i = %d",i);
  printf("\n value of i = %d", *(&i));
  printf("\nvalue of j = %d",j);
  printf("\nadress of i = %p", &i);
  printf("\nadress of k = %p", &j);
  printf("\nvalue of k = %d",k);
  printf("\n value of i = %d");
  printf("\nvalue of j = %d",**k);

  return 0;
  
}