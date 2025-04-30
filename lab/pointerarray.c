#include<stdio.h>
int main() {
	char *fruits[2]={"Apple","Banana"};
	printf("%s\n",*fruits[0]);
	int a=1, b=6;
	int *array[2];
	array[0]=&a;
	array[1]=&b;
	printf("%d\n",*array[0]);
	printf("%d\n",*array[1]);
	return 0;
}
