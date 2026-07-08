#include <stdio.h>
#include <assert.h>

int varify_add(int a, int b) {
    unsigned t = a;

    t <<= 1;
    t = ~t;
    t >>= 1;

    if ((unsigned)b >= t)
        return 0;
    else
        return 1;
}

int main() {
    int a = __INT_MAX__;
    int b = 1;
    int c = __INT_MAX__ - 2;

    assert(varify_add(a, b + 4) == 0);
    assert(varify_add(b, c) == 1);

    printf("ok\n");
}