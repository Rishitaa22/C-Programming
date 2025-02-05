/*
Name: Rishita
Date: 05/02/25
Purpose: Bubble sort
*/
#include<stdio.h>
int main(){
  int n, i, j, temp;
  printf("\nEnter the number of elements: ");
  scanf("%d", &n);
  int number[n];
  printf("\nEnter %d elements:",n);
  for (int i=0;i<n;i++){
    scanf("%d",&number[i]);
  }
  for (int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      if(number[j]>number[j+1]){
        int temp=number[j];
        number[j]=number[j+1];
        number[j+1]=temp;
      }
    }
  }
  printf("\nThe sorted array: ");
  for(int i=0;i<n;i++){
    printf("%d\t", number[i]);
  }
  return 0;
}
