/*
Name: Rishita
Date: 05/02/25
Purpose: To find the maximum and minimum elements and display their positions in the array.
*/
#include<stdio.h>
int main(){
  int n, i, smallest, greatest, a, b ;
  printf("\nEnter the number of elements: ");
  scanf("%d", &n);
  int number[n];
  printf("\nEnter %d elements:",n);
  for (i=0;i<n;i++) {
    scanf("%d", &number[i]);
  }
  smallest=number[0];
  greatest=number[0];
  for (i=0; i<n; i++){
    if(number[i]>greatest){
      greatest=number[i];
      a=i;
    }
    if(number[i]<smallest){
      smallest=number[i];
      b=i;
    }
  }
  printf("\nThe largest number is %d at index position %d",greatest, a);
  printf("\nThe smallest number is %d at index position %d",smallest, b);
  return 0;
}
