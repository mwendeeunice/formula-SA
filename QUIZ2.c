//Name: Eunice Mwende
// Reg: CT100/G/26231/25

#include <stdio.h>

int calculateFare(int distanceKm) {
    if (distanceKm <= 0) return 0;
    return distanceKm * 50;
}

int main(void) {
    int d = 10;
    printf("Distance: %d km -> Fare: KSh %d\n", d, calculateFare(d)); // example
    return 0;
}
