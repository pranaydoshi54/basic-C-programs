//C program to display simple calculator.

#include<stdio.h>
#includestdlib.h<>
int main()
{
  int num1,num2;
  char operator;
  
  printf("Enter an operator(+,-,/,*):");
  scanf("%c", &operator);

  printf("Enter two numbers:");
  scanf("%d%d", &num1,&num2);
  
  switch(operator)
  {
    case'+' : printf("%d + %d =%d",num1,num2,num1+num2);
              break;
    case'-' : printf("%d - %d =%d",num1,num2,num1-num2);
              break;
    case'/' : printf("%d / %d =%d",num1,num2,num1/num2);
              break;
    case'*' : printf("%d * %d =%d",num1,num2,num1*num2);
              break;

    default: printf("Error!\n Invalid Operator");
  }
}
