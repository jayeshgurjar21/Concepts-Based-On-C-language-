#include<stdio.h>
// recursive function to  calculate factorial 
long int fact(int x);
int main() 
{
    int x;
    printf("Enter A Number To Find Factorial: ");
    scanf("%d",&x);
   
    printf("The Factorial of %d = %ld", x, fact(x));//statement of printing 
    
     return 0;
}

long int fact(int x) {
    if (x>=1)//base case 
        return x*fact(x-1);//recursive case
    else
        return 1;
}