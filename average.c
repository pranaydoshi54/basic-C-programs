//C program to find average of 5 numbers.

#include<stdio.h>
#include<stdlib.h>

int main()
{
  float num1,num2,num3,num4,num5;
  float avg;
  
  printf("Enter Five Numbers: ");
  scanf("%f%f%f%f%f", &num1,&num2,&num3,&num4,&num5);
  
  avg=(num1+num2+num3+num4+num5)/(5.0);
  printf("Average of Five Numbers=%lf", avg);
  
  return 0;
}
