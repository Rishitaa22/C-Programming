#include<stdio.h>
int main(){
    int ageRam, ageShyam, ageAjay;

    printf("\nEnter age of Ram: ");
    scanf("%d",&ageRam);

    printf("\nEnter age of Shyam: ");
    scanf("%d",&ageShyam);

    printf("\nEnter age of Ajay: ");
    scanf("%d",&ageAjay);

    if (ageRam<ageShyam && ageRam<ageAjay) {
        printf("\nRam is the youngest.");
    }
    else if (ageShyam<ageRam && ageShyam<ageAjay) {
        printf("\nShyam is the youngest.");
    }
    else {
        printf("\nAjay is the youngest.");
    }
    return 0;
}
