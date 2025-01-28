#include<stdio.h>
int main(){
  int rollNumber;
  char name[20];
  float mark1, mark2, mark3, total, percentage ;

  printf("\nEnter your name:");
  fgets(name,sizeof(name),stdin);

  printf("\nEnter your roll number: ");
  scanf("%d", &rollNumber);

  printf("\nEnter your marks in subject 1: ");
  scanf("%f", &mark1);

  printf("\nEnter your marks in subject 2: ");
  scanf("%f", &mark2);

  printf("\nEnter your marks in subject 3: ");
  scanf("%f", &mark3);

  total=mark1+mark2+mark3;
  percentage=(total/300)*100;

  printf("\nName of student: %s", name);
  printf("\nRoll Number: %d", rollNumber);
  printf("\nPercentage: %f", percentage);

  if (percentage>=75) {
    printf("\nFirst Class with Distinction");
  }
  else if (percentage>=60 && percentage<75) {
    printf("\nFirst class.");
  }
  else {
    printf("\nSecond class.");
  }

  return 0;
}
