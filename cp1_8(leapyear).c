/*
Name: Rishita
Date: 29/01/25
Purpose: Program to determine whether the year is a leap year or not.
*/
#include<stdio.h>
int main() {
  int year;
  printf("\nEnter year: ");
  scanf("%d", &year);
  if (year%4==0){
    if (year%100!=0){
      printf("\nLeap Year.");
    }
  }
  else if (year%400==0) {
    printf("\nleap year.");
  }
  else{
    printf("\nNot a leap year.");
  }
  return 0;
}
