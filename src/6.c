#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 100 + 1;
    printf("The random number is: %d\n", num);
    return 0;
}
