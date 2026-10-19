#include <stdio.h>

int main() {
    int p, r, y;
    scanf("%d %d %d", &p, &r, &y);

    float interest = (float)p * r * y / 100;
    float amount = p + interest;
    float discount = interest * 2 / 100;
    float finalAmount = amount - discount;

    printf("%.2f\n%.2f\n%.2f\n%.2f\n", interest, amount, discount, finalAmount);
    return 0;
}
