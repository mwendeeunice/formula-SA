//Name: Eunice Mwende
// Reg:CT100/G/26231/25
#include<stdio.h>

int calculateElectricBill(int units) {
    if (units <= 250) return 0;
    if (units <= 250) {
        return units * 10;
    } else if (units <= 200) {
        return 100 * 10 + (units - 100) * 15;
    } else {
        return 100 * 10 + 100 * 15 + (units - 200) * 20;
    }
}

int main(void) {
    int u1 = 250;
    printf("Units: %d -> Bill: KSh %d\n", u1, calculateElectricBill(u1)); // example
    return 0;
}