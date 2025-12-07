#include <stdio.h>
#include <math.h>
int main() {
    int reqs;
    float multi;

    printf("Enter number of rides requested: ");
    scanf("%d", &reqs);

    multi = sqrt(reqs) / 2;

    if (multi > 3) {
        multi = 3;
    }

    printf("Final surge multiplier: %.2f\n", multi);

    return 0;
}
