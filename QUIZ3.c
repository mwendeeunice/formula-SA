//Name:EUNICE MWENDE
//REG:CT100/G/26231/25

#include <stdio.h>

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void) {
    double f = 98.6;
    double c = convertToCelsius(f);
    printf("%.1f°F -> %.2f°C\n", f, c); // example
    return 0;
}