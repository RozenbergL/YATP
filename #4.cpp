#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
    vector <string> nam;
    for (int i = 0; i < 2; ++i) {
        string name2;
        string name1 = st[i].name;
        for (int j = name1.size(); j >= 0; j--) {
            name2 += name1[j];
        }
        nam.push_back(name2);
    }
    sort(nam.begin(), nam.end());
    for (auto now : nam) {
        cout << now << " ";
    }
    return 0;
}