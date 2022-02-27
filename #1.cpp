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
        cout << st[i].age << " " << st[i].name << " " << st[i].drink << endl;
    }
    return 0;
}