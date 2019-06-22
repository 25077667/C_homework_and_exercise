#include <stdio.h>
// use double to slove it!
// And you can reference by IEEE-754
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("long: %f\nwidth: %f\nheight: %f\n", a, b, c);
    printf("Surface area:  %6f\n", (a * b + b * c + c * a) * 2);
    printf("volume: %6f\n", a * b * c);

    return 0;
}
