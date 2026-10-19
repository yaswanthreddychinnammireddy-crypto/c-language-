#include <stdio.h>

int main() {
    int exp, perf;
    scanf("%d %d", &exp, &perf);

    if (exp < 3)
        printf("Level: Junior\n");
    else if (exp > 7 && perf >= 85)
        printf("Level: Senior\n");
    else if (exp >= 3 && perf >= 80)
        printf("Level: Mid-Level\n");
    else
        printf("Level: Junior\n");
    return 0;
}
