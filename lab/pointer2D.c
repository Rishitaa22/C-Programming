#include<stdio.h>
#include<stdlib.h>
int main() {
	//int **matrix;
	int rows=2, cols=3;
	matrix=(int *)malloc(rows*cols*sizeof(int));
	for (int i=0;i<row;i++) {
		for (int j=0;j<cols;j++) {
			scanf("%d",(mat+i * cols+j));
		}
	}
	printf("\n");
	for (int i=0.;i<rows;i++){
		for (int j=0;j<cols;j++) {
			printf("%d\t",(mat+i * cols+j));
		}
	}
	printf("\n");
	
	return 0;
}
