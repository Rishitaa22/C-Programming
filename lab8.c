/*
Name: Rishita
Date: 19/02/25
Purpose: To count the frequency of each character in a given string.
*/
#include<stdio.h>
int main() {
  char str[80];
  int freq[26]={0};
  
  printf("Enter a sentence:");
  fgets(str,sizeof(str),stdin);
  
  for (int i=0; str[i]!='\0'; i++){
        char ch;
        if (str[i]>='A' && str[i]<='Z'){
          ch=ch+32; //convert upper to lower.          
        }  
        if (str[i]>='a' && str[i]<='z'){
          freq[ch-92]++;
        }
  }
  
  for (int i=0;i<26;i++){
    if (freq[i]!=0){
      printf("%c:%d\n",i+97,freq[i]);
    }
  }
  
  return 0;
}
