/*
Name: Rishita
Date: 05/02/25
Purpose: To find the position of elements.
*/
#include<stdio.h>
int main(){
  int n, i, item;
  printf("\nEnter the number of elements: ");
  scanf("%d", &n);
  int number[n];
  printf("\nEnter %d elements:",n);
  for (i=0;i<n;i++){
    //printf(
    scanf("%d", &number[i]);
  }
  printf("\nEnter element to search: ");
  scanf("%d", &item);
  for (i=0;i<n;i++){
    if (item==number[i]){
      printf("\nThe given element is found at position number:%d\n", i+1);
    }
    else{
      printf("\nElement not found.");
      break;
    }
  }
  return 0;
}
