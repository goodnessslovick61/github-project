#include <stdio.h>
#include <stdlib.h>

int main() {
    int rand_num = rand() % 10 + 1;
    printf("Random number: %d\n", rand_num);
    return 0;
}
