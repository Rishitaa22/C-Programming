/*
Name: Rishita
Date: 29/01/25
Purpose: C program that acts as a simple calculator. 
*/
#include<stdio.h>
int main(){
  int num1, num2, result=0;
  char operator;
  
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  printf("Choose an operator: ");
  scanf(" %c", &operator);
  
  switch (operator) {
    case '+':
      result=num1+num2;
      printf("\n%d+%d=%d",num1,num2,result);
      break;
      
    case '-':
      result=num1-num2;
      printf("\n%d+%d=%d",num1,num2,result);
      break;
      
    case '*':
      result=num1*num2;
      printf("\n%d+%d=%d",num1,num2,result);
      break;
      
    case'/':
      result=num1/num2;
      printf("\n%d+%d=%d",num1,num2,result);
      break;
      
      
    case '%':
      result=num1%num2;
      printf("\n%d+%d=%d",num1,num2,result);
      break;
      
    default:
      printf("Invalid operator.");
      
  return 0;
  }
}
  
