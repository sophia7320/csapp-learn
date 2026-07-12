#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define long long long

long scale(long x, long y, long z) {
    long t = x + 4 * y + 12 * z;
    return t;
}