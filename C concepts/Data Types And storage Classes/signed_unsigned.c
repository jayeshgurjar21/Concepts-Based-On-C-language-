#include<stdio.h>

int main ()
{ 
 unsigned int length = 10;//length of rectangle (cannot be negative )
 unsigned int width = 5;//width of rectangle ( cannot be negative )
 unsigned int area ;

int temprature = -15;//temprature (it may be negative ) 

area = length * width;//area of rectangle 

printf("the area of the rectangle is:%u square units\n",area);

printf("the current temprature is :%u degre celcius\n",temprature);

return 0;

}