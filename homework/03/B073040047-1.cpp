#include <bits/stdc++.h>
using namespace std;

int main() {
    int salary;
    string s = "Your annual salary is $";
    while (1) {
        cout << "Enter the value of monthly salary : ";
        cin >> salary;
        cout << endl;

        if (salary < 30001)
            cout << s << salary * 13.5 << endl;
        else if (salary < 50001)
            cout << s << salary * 14 << endl;
        else if (salary < 70001)
            cout << s << salary * 14.5 << endl;
        else if (salary > 70000)
            cout << s << salary * 16 << endl;
        else
            continue;
    }
    return 0;
}
