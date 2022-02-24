#include <stdio.h>
int main() {
    double first_number;
    double second_number;

    printf("Enter First Number: ");
    scanf("%lf", &first_number);
    printf("Enter Second Number: ");
    scanf("%lf", &second_number);
    printf("Answer: %f", first_number* second_number);

}