#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

int main() {

    int fahrenheit;
    float celsius;

    printf("Fahrenheit to Celsius Conversion Table: \n");
    for(fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit = fahrenheit - STEP) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%3d F \t %6.1f C\n", fahrenheit, celsius);
    }
}
