#include<stdio.h>
int main (){
    int marks[5][6];//array declaretion 

    for(int row = 0; row < 2; row++)
    {
      for( int col =0; col < 3; col++)//nested loop for two dimensions 
      {
        printf("enter the marks of student :%d, subject:%d: ",
        row+1,col+1);//condition
        scanf(" %d", &marks[row][col]);
      }
    }
}