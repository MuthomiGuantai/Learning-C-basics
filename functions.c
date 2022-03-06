#include <stdio.h>
int main(){

    sayHi("Bruce", 27);
    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s and welcome you are %d", name, age);
}