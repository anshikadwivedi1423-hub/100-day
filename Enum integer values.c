#include <stdio.h>

enum Numbers {
    ONE = 10,
    TWO = 20,
    THREE = 30,
    FOUR = 40
};

int main() {
    enum Numbers num;

    printf("ONE = %d\n", ONE);
    printf("TWO = %d\n", TWO);
    printf("THREE = %d\n", THREE);
    printf("FOUR = %d\n", FOUR);

    return 0;
}
