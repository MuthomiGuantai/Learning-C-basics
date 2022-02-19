#include <stdio.h>

//start the main function
int main (){
    //create the input variables
    double number;
    char letter;
  //take the inputs and store them
    printf("Input values here; ");
    scanf("%lf %c", &number, &letter);
  //print out the values
    printf("\nWeignt = %lf", number);
    printf("\nFirst letter of name: %c", letter);

    return 0;
}