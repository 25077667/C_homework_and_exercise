#include <bits/stdc++.h>
using namespace std;
int blank = 0;

bool isInRange(int n) {
    return n > 0 && n < 27;
}

void draw_parallelogram(int n) {
    if (blank == n)
        return;
    for (int i = 0; i < blank; i++)
        cout << " ";
    for (int i = 0; i < n * 2 - 1; i++) {
        if (i < n)
            cout << (char)('A' + i) << " ";
        else
            cout << (char)('A' + (2 * (n - 1) - i)) << " ";
    }
    blank++;
    cout << endl;
    draw_parallelogram(n);
}

void draw_diamond(int n) {
    int horizon = 1, vertical = n;
    char element = 'A';
    for (int i = 1; i < 2 * (n + 1); i++) {
        char element = 'A';
        for (int j = 1; j < vertical; j++)
            cout << "  ";
        for (int j = 1; j <= horizon; j++) {
            cout << element << " ";
            if (j <= horizon / 2)
                element++;
            else
                element--;
        }
        cout << endl;
        if (i >= n) {
            horizon -= 2;
            vertical++;
        } else {
            horizon += 2;
            vertical--;
        }
    }
}
int main() {
    int n;
    while (1) {
        blank = 0;
        cout << "Please input the number N:";
        cin >> n;
        if (!isInRange(n)) {
            cout << "The number N is out of range. Please input again!!\n"
                 << endl;
            continue;
        }
        cout << endl;
        draw_parallelogram(n);
        cout << endl;
        draw_diamond(n);
    }
    return 0;
}
