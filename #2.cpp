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
    int maxi = 0;
    for (int i = 0; i < 2; ++i) {
        if (st[i].age > maxi) {
            maxi = st[i].age;
        }
    }
    cout << maxi;
    return 0;
}