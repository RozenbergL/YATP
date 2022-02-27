#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    string sign;
    int wins = 0;
};

int main() {
    vector <Student> st(3);
    for (int i = 0; i < 3; ++i) {
        cin >> st[i].name >> st[i].sign; ///k - камень, n - ножницы, b - бумага
    }
    for (int i = 0; i < 3; i++){
        for (int j = i; j < 3; j++) {
            if (st[i].sign == "k" and st[j].sign == "n") {
                st[i].wins++;
            }
            if (st[i].sign == "k" and st[j].sign == "b") {
                st[j].wins++;
            }
            if (st[i].sign == "n" and st[j].sign == "b") {
                st[i].wins++;
            }
            if (st[i].sign == "n" and st[j].sign == "k") {
                st[j].wins++;
            }
            if (st[i].sign == "b" and st[j].sign == "k") {
                st[i].wins++;
            }
            if (st[i].sign == "b" and st[j].sign == "n") {
                st[j].wins++;
            }
        }
    }
    int maxi = 0;
    string winner;
    for (int i = 0; i < 3; ++i) {
        ///cout << st[i].name << " " << st[i].wins << endl;
        if (st[i].wins > maxi) {
            maxi = st[i].wins;
            winner = st[i].name;
        }
    }
    cout << winner << " " << maxi;
    return 0;
}