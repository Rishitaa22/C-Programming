#include<stdio.h>
int main(){
    float length, breadth, area, perimeter;

    printf("\nEnter length of rectangle: ");
    scanf("%f", &length);

    printf("\nEnter breadth of rectangle: ");
    scanf("%f", &breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("\nArea=%.2f", area);
    printf("\nPerimeter=%.2f", perimeter);

    if (area>perimeter){
        printf("\nThe area of the rectangle with length=%.2f and breadth=%.2f is greater than its perimeter.", length, breadth);
    }
    else{
        printf("\nThe area of the rectangle with length=%.2f and breadth=%.2f is not greater than its perimeter.",length, breadth);
    }
    return 0;
}
