#include <stdio.h>

int main() {
    int total, x, y;
    scanf("%d %d %d", &total, &x, &y);

    int longBen = total * x / 100;
    int remaining = total - longBen;
    int blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;
    int each = remaining / 3;   // leftover (remaining % 3) is thrown into the sea

    printf("%d\n%d\n%d\n", longBen, blackbeard, each);
    return 0;
}
