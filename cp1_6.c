#include<stdio.h>
int main() {
    int num;
    printf("\nEnter an integer: ");
    scanf("%d", &num);

    if (num%2==0){
        printf("\nThe number is an even number.");
    }
    else {
        printf("\nThe number is a odd number.");
    }

    return 0;
}
