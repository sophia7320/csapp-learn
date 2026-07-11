#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define long long long

void decode(long* xp, long* yp, long* zp) {
    long r8 = *xp;
    long cx = *yp;
    long ax = *zp;

    *yp = r8;
    *zp = cx;
    *xp = ax;

    return;
}