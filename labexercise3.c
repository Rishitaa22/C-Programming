/*
Name: Rishita
Date: 29/01/25
Purpose: To calculate the factorial of a given number using a while loop.  
*/
#include<stdio.h>
int main(){
  int num , fact=1;
  printf("Enter a positive integer:");
  scanf("%d", &num );
  
  if(num>0) {
    while(num>0){
      fact*=num;
      num-=1;
    }
  printf("\nFactorial=%d",fact);  
  }
  else{
    printf("Number is not positive.");
  }
  return 0;
}
