#include<stdio.h>
int main(){
    int side1, side2, side3;

    printf("\nEnter first side of triangle: ");
    scanf("%d",&side1);

    printf("\nEnter second side of triangle: ");
    scanf("%d",&side2);

    printf("\nEnter third side of triangle: ");
    scanf("%d",&side3);

    if (side1==side2 && side1==side3 && side2==side3) {
        printf("\nThe triangle with given sides is an equilateral triangle.");
    }
    else if (side1==side2 || side1==side3 || side2==side3) {
        printf("\nThe triangle with given sides is an Isosceles triangle.");
    }
    else {
        printf("\nThe triangle with given sides is a Scalene triangle.");
    }
    return 0;
}

