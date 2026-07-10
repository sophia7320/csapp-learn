#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int* p = (int*)malloc(sizeof(int));

    printf("%b", p);
}