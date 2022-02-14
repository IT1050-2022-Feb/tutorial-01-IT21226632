/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark_1 , mark_2 , total;
  float average;

  printf("enter your 1st mark ");
  scanf("%d" , &mark_1);

  printf("enter your 2nd mark ");
  scanf("%d" , &mark_2);

  total = mark_1 + mark_2;
  average = total/2.0;

  printf("your average is : %.2f", average);
   
  return 0;
}

