#include <stdio.h>

// I think this unsigned qualifier is actually redundant
static unsigned int counter = 0;

void increment(void) {
    counter++;
}

int retrieve(void) {
    return counter;
}


int main(void) {
    for (int i = 0; i < 5; i++) {
        increment();
        printf("%d ", retrieve());
    }
    printf("\n");
    return 0;
}
