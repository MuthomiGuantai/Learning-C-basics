/*
data types
int 4 bytes %d for printing
double 8 bytes %1f for printing
float 4 bytes %f for printing
char 1 byte %c for printing
*/
#include <stdio.h>
int main (){
    int age = 27;
    double weight = 53.45;
    float height = 5.7f;
    char firstName = 'Bruce', secondName = 'Muthomi';

    printf("My name is %c", firstName); printf("%c", secondName);
    printf("\nI am %d years old.", age);
    printf("\nI weigh %1f kilograms", weight);
    printf("\nI am %f feet tall", height);

    return 0;
}