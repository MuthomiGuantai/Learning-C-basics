#include <stdio.h>

int main (){

    int age;
    float weight;
    char letter;

    printf("Enter age here: ");

    scanf("%d", &age);

    printf("Enter your weight here: ");

    scanf("\n%1f", &weight);

    printf("Enter first letter of your middle name: ");

    scanf("\n%c", &letter);

    printf("\nAge = %d", age);
    printf("\nWeight = %1f", weight);
    printf("\nFirst letter of middle name; %c", letter);




    return 0;
}