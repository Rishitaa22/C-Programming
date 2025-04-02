#include<stdio.h>
struct student{
  int rollNo;
  char name[20];
  float cgpa;
};
int main(){
  struct student s1;
  printf("\nEnter name of student: ");
  fgets(s1.name,sizeof(s1.name),stdin);
  printf("\nEnter roll number of student: ");
  scanf("%d",&s1.rollNo);
  printf("\nEnter cgpa of student: ");
  scanf("%f",&s1.cgpa);
  printf("\nStudent Details: ");
  printf("\nName: %s",s1.name);
  printf("\nRoll Number:%d",s1.rollNo);
  printf("\nCGPA:%.2f\n",s1.cgpa);
}
