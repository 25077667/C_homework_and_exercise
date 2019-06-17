#include <bits/stdc++.h>
using namespace std;
int lower_char[26] = {0}, captal_char[26] = {0};
void read_write_file() {
    //write file
    char buff[1000];
    srand(1);
    FILE *file_pointer;
    file_pointer = fopen("input1.txt", "w+");
    for (int i = 0; i < 1000; i++) {
        if (rand() % 2)
            buff[i] = 'A' + rand() % 26;
        else
            buff[i] = 'a' + rand() % 26;
    }
    fwrite(buff, 1, 1000, file_pointer);
    fclose(file_pointer);
    memset(buff, 0, 1000);  //free the buff
    //read file
    char c;
    file_pointer = fopen("input1.txt", "r");
    while (fscanf(file_pointer, "%c", &c) != EOF) {
        if ((int)c > 96)
            lower_char[(int)c - 97]++;
        else
            captal_char[(int)c - 65]++;
    }
    fclose(file_pointer);
}
int main() {
    read_write_file();
    while (1) {
        char c;
        cout << "�п�J�n�M�䪺�r��:";
        cin >> c;
        if (((int)c > 96 && (int)c < 123) || ((int)c > 64 && (int)c < 91))
            printf("�r��\'%c\'�@�@�M���:%d", c, lower_char[toupper(c) - 'A'] + captal_char[toupper(c) - 'A']);
        else if (c == '*') {
            cout << "�����M��C";
            break;
        } else
            cout << "��J���~�A�A�դ@���C";
        cout << endl
             << endl;
    }
    return 0;
}
