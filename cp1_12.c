#include<stdio.h>
int main(){
    float angle1, angle2, angle3;

    printf("\nEnter the first angle of the triangle: ");
    scanf("%f", &angle1);

    printf("\nEnter the second angle of the triangle: ");
    scanf("%f", &angle2);

    printf("\nEnter the third angle of the triangle: ");
    scanf("%f", &angle3);

    if (angle1+angle2+angle3==180) {
        printf("\nThe triangle is a valid triangle.");
    }
    else {
        printf("\nThe triangle is not a valid triangle.");
    }

    return 0;
}
