/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int subCount = 2;
  float fullMark = 0;
  
  int count;
  for(count = 0; count < subCount; count++){
    int subMark;
    scanf("%d",&subMark);
    fullMark += subMark;
  }

  printf("%f", fullMark/subCount);
  
  return 0;
}

