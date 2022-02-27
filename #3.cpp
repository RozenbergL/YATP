#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    int age;
    string name;
    string drink;
};

int main() {
    vector <Student> st(2);
    for (int i = 0; i < 2; ++i) {
        cin >> st[i].age >> st[i].name >> st[i].drink;
    }
    for (int i = 0; i < 2; ++i) {
        int flag = 0;
        for (int j = 2; j < sqrt(st[i].age) + 1; j++) {
            if (st[i].age % j == 0) {
                flag = 1;
            }
        }
        if (flag == 0) {
            cout << st[i].name << " " << st[i].drink << endl;
        }
    }
    return 0;
}