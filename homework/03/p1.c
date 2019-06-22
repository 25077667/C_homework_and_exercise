#include <stdio.h>

int main() {
    int salary, Bonus;
    char* string = "Your annual salary is $";
    printf("Enter the value of monthly salary : ");
    scanf("%d", &salary);

    if (salary < 30001)
        Bonus = salary * 13.5;
    else if (salary < 50001)
        Bonus = salary * 14;
    else if (salary < 70001)
        Bonus = salary * 14.5;
    else if (salary > 70000)
        Bonus = salary * 16;
    else
        printf("error value!\n");

    printf("%s%d", string, Bonus);

    return 0;
}
