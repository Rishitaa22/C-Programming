/*
Name: Rishita
Date: 19/02/25
Purpose: To reverse a string.
*/
#include<stdio.h>
int main() {
  char str[80];
  printf("Enter the string you need to reverse: ");
  fgets(str,sizeof(str), stdin);
  int length;
  for(length=0;str[length]!='\0';length++);
  int i=length-1;
    for(int j=0;j<length/2;j++){
      int temp=str[i];
      str[i]=str[j];
      str[j]=temp;
      i--;
    }
    printf("The reversed string is:");
    puts(str);
  return 0;
  }
