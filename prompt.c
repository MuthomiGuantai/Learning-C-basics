#include <stdio.h>

int main () {
    int age;
    char name[15], dad_name[15];
    double weight;

    printf("Enter your age; ");
    scanf("%d", &age);
    printf("Enter your name; ");
    scanf("%s", &name);
    printf("\nEnter your father's name: ");
    fgets(dad_name, 15, stdin);
    printf("\nEnter your weight: ");
    scanf("%lf", &weight);
    printf("\nYour name is %s", name);
    printf("Your age is %d", age);
    printf("Your dad's name is %s", dad_name);
    printf("Your weight is %ls", weight);

    return 0;

}