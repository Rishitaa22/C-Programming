#include<stdio.h>
int main(){
    int maths, physics, chemistry, total, totalMathsPhysics ;

    printf("\nEnter your maths mark:");
    scanf("%D", &maths);

    printf("\nEnter your physics mark:");
    scanf("%D", &physics);

    printf("\nEnter your chemistry mark:");
    scanf("%D", &chemistry);

    total=maths+physics+chemistry;
    totalMathsPhysics=maths+physics;

    if (maths>=65 && physics>=55 && chemistry>=50 && total>=190 || totalMathsPhysics>=140) {
        printf("\nYou are eligible for admission to this professional course.");
    }
    else {
         printf("\nYou are not eligible for admission to the professional course.");
    }
    return 0;
}
