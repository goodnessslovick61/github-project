#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Variable declaration
    int age;
    char name[20];

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for input
    printf("Enter your name: ");
    scanf("%s", name);

    // Display output
    printf("Your age is %d and your name is %s.\n", age, name);

    return 0;
}
