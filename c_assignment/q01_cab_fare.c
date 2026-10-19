#include <stdio.h>
#include <string.h>

int main() {
    int distance;
    char member[10];
    float fare = 100;

    scanf("%d %s", &distance, member);

    if (distance > 10)
        fare += (distance - 10) * 20;

    if (strcmp(member, "true") == 0 || strcmp(member, "1") == 0)
        fare = fare * 0.9;

    printf("Final Fare: Rs.%.0f\n", fare);
    return 0;
}
