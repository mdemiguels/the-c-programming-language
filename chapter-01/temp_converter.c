#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int lower_bound, upper_bound, step;

    lower_bound = 0;
    upper_bound = 300;
    step = 20;

    celsius = lower_bound;

    printf("Celsius to Fahrenheit Conversion Table: \n");
    while (fahrenheit <= upper_bound) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f C \t %6.1f F\n", celsius, fahrenheit);
        celsius += step;
    }
}