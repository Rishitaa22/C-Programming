#include<stdio.h>
int main() {
  FILE *fp1;
  fp1=fopen("filee.txt","r");
  char ch;
  int wordCount=0, sentenceCount=0, lineCount=0;
  while(fscanf(fp1,"%c",&ch)==1){
    if(ch==' '|| ch=='.'){
      wordCount++;
    }
    if(ch=='.'){
      sentenceCount++;
    }
    if (ch=='\n'){
      lineCount++;
    }
  }
  fclose(fp1);
  printf("Word Count=%d\n", wordCount);
  printf("Sentence Count=%d\n", sentenceCount);
  printf("Line Count=%d\n", lineCount);
  return 0;
}
