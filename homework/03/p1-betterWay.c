#include <stdio.h>
#include <stdlib.h>

int annualBonus(int salary) {
    if (salary < 30001)
        return salary * 13.5;
    else if (salary < 50001)
        return salary * 14;
    else if (salary < 70001)
        return salary * 14.5;
    else if (salary > 70000)
        return salary * 16;
    else {
        printf("error value!\n");
        exit(1);  //leave this process
    }
}

int main() {
    int salary, Bonus;
    char* string = "Your annual salary is $";
    printf("Enter the value of monthly salary : ");
    scanf("%d", &salary);

    Bonus = annualBonus(salary);
    printf("%s%d", string, Bonus);

    return 0;
}
