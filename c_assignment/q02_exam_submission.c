#include <stdio.h>

int main() {
    int answered, timeLeft, submitted;
    scanf("%d %d %d", &answered, &timeLeft, &submitted);

    if (answered >= 1 && timeLeft > 0 && submitted == 0)
        printf("Submission Allowed\n");
    else
        printf("Submission Not Allowed\n");
    return 0;
}
