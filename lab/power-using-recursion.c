/*Power of a Number Using Recursion.*/
#include<stdio.h>
int power(int base,int exponent){
  if (exponent==0){
    return 1;
  }
  if (exponent==1){
    return base;
  }
  else{
    return base * power(base, exponent - 1);
  }
}
int main(){
  int base;
  int exponent;
  int result;
  printf("Enter a non-zero number: ");
  scanf("%d",&base);
  printf("Enter exponent value: ");
  scanf("%d", &exponent);
  result=power(base,exponent);
  printf("%d",result);
}
