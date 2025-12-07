/*Write a C program that takes input: driver rating (1–5) and driver distance from passenger
(in km). If rating >= 4 and distance <= 5 print “Top driver nearby”, Else if rating >= 3 and
distance <= 10 print “Average driver assigned”, Else print “No suitable driver available”.*/
#include<stdio.h>
int main() {
    int rating;
    float distance;
    
    printf("Enter driver rating (1-5): ");
    scanf("%d", &rating);
    
    printf("Enter driver distance from passenger (in km): ");
    scanf("%f", &distance);
    
    if (rating >= 4 && distance <= 5) {
        printf("Top driver nearby\n");
    } else if (rating >= 3 && distance <= 10) {
        printf("Average driver assigned\n");
    } else {
        printf("No suitable driver available\n");
    }
    return 0;
}


