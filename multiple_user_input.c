#include <stdio.h>
int main (){

    double number;
    char letter;

    printf("Input values here; ");
    scanf("%lf %c", &number, &letter);

    printf("\nWeignt = %lf", number);
    printf("\nFirst letter of name: %c", letter);

    return 0;
}