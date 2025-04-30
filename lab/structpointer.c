include<stdio.h>
typedef struct {
	int rollNo;
	char name[20];
}student;
int main(){
	student s1;
	student *ptr;
	ptr= &s1;
	scanf("%d",ptr->rollNo);
	scanf("%s",ptr->name);
	//student*
	return 0;
}
