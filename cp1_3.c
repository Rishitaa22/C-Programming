#include<stdio.h>
int main() {
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    if (age>=18){
        printf("\nCongratulation! You are eligible for casting your vote.");
    }
    else {
        printf("\nSorry, You are not eligible for casting your vote yet.");
    }
    return 0;
}
