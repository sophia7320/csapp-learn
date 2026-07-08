#include <stdio.h>

void show_byte(void* bg, size_t length) {
    for (size_t i = 0; i < length; i++) {
        printf("%.2x ", *((unsigned char*)bg + i));
    }
    printf("\n");
}

int main() {
    unsigned n = 0x12345678;

    double d1 = -64;
    float d2 = 64;

    show_byte(&d1, sizeof(d1));
    show_byte(&d2, sizeof(d2));

    show_byte(&n, sizeof(n));
}