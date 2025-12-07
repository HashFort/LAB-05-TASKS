/*Write a C program that takes input loyalty points of a passenger. If points > 1000 ? discount
= 20%. Else ? discount = 5%. Print final discount percentage using a ternary operator.*/
#include <stdio.h>
int main() {
    int loyalty;
    float discount;
    printf("Enter loyalty points of a passenger:");
    scanf("%d",&loyalty);
    discount = (loyalty> 1000) ? 20.0:5.0;
    printf("Final discount percentage:%.0f%%\n",discount);
    return 0;
}

