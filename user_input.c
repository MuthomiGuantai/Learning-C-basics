#include <stdio.h>

int main (){

    int age;
    double weight;
    char letter;
    printf("Enter age here: ");

    scanf("%d", &age);

    printf("Enter your weight here: ");

    scanf("%lf", &weight);

    printf("Enter first letter of your middle name: ");

    scanf("%c", &letter);

    printf("\nAge = %d", age);
    printf("\nWeight = %1f", weight);
    printf("\nFirst letter of middle name; %c", letter);




    return 0;
}