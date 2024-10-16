#include<stdio.h>

long factorial(int);

int main()
{
  printf("\nfactorial of 4:%d", factorial(4));
  printf("\nfactorial of 5:%d", factorial(5));
  printf("\nfactorial of 10:%d", factorial(10));
  printf("\nfactorial of 15:%d", factorial(15));
  printf("\nfactorial of 20:%d", factorial(20));
  printf("\nfactorial of 21:%d", factorial(21));
  printf("\nfactorial of 25:%d", factorial(25));

  return 0;
}
long factorial (int num)
 {
  long result =  1;
  for( int i = 2; i<= num; i++){
    result *= i;
  }
  return result;
}
