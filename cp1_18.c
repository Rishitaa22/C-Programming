#include<stdio.h>
int main() {
    int grade;

    printf("Enter a grade (E, V, G, A, F): ");
    scanf("%c", &grade);

    switch (grade) {
        case 'E':
            printf("\nExcellent");
            break;
        case 'V':
            printf("\nVery Good");
            break;
        case 'G':
            printf("\nGood");
            break;
        case 'A':
            printf("\nAverage");
            break;
        case 'F':
            printf("\nFail");
            break;
        default:
            printf("\nInvalid input!");
    }
    return 0;
}

