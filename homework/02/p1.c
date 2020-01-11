#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("Num1: %d\n", a);
    printf("Num2: %d\n", b);
    printf("Num3: %d\n", c);
    printf("Num4: %d\n", d);

    printf("%d + %d - %d * %d = %d\n", a, b, c, d, a + b - c * d);
    printf("%d + %d * %d - %d = %d\n", a, b, c, d, a + b * c - d);
    printf("%d - %d + %d * %d = %d\n", a, b, c, d, a - b + c * d);
    printf("%d - %d * %d + %d = %d\n", a, b, c, d, a - b * c + d);
    printf("%d * %d + %d - %d = %d\n", a, b, c, d, a * b + c - d);
    printf("%d * %d - %d + %d = %d\n", a, b, c, d, a * b - c + d);

    return 0;
}