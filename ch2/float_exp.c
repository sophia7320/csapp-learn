#include <stdio.h>

// #define POS_INFINITY (double)1.0 / 0.0
#define POS_INFINITY 1e400
#define NEG_INFINITY -1e400
#define NEG_ZERO (double)1/NEG_INFINITY

int main() {
    printf("%f", NEG_ZERO);
}