#include <stdio.h>

int main() {

    int fahrenheit;
    float celsius;

    printf("Fahrenheit to Celsius Conversion Table: \n");
    for(fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%3d F \t %6.1f C\n", fahrenheit, celsius);
    }
}
