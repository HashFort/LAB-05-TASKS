#include <stdio.h>
int main() {
    int age;
    float bal;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter account balance: ");
    scanf("%f", &bal);

    if (age < 21) {
        printf("Not eligible for ride (underage)\n");
    } else {
        if (bal < 200) {
            printf("Not eligible (insufficient balance)\n");
        } else {
            printf("Eligible for ride\n");
        }
    }

    return 0;
}
