#include <stdio.h>

int main() {
    double temperature;
    char type;
    printf("Enter the Temperature: ");
    scanf("%lf%c", &temperature, &type);

    if (type == 'c' || type == 'C')
        printf("\nFahrenheit: %.3fF\n", temperature * 1.8 + 32);
    else if (type == 'f' || type == 'F')
        printf("\nCelsius: %.4fC\n", (temperature - 32) * 5 / 9);
    else
        printf("ERROF!\n");

    return 0;
}
