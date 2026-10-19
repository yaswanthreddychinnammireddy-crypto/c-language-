#include <stdio.h>

int main() {
    float mileage;
    int litres, distance;
    scanf("%f %d %d", &mileage, &litres, &distance);

    if (mileage * litres >= distance)
        printf("Can reach\n");
    else
        printf("Cannot reach\n");
    return 0;
}
