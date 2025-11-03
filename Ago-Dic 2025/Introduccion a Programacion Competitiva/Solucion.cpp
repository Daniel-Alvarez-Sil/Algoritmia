#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (cin >> s) {
        unordered_set<char> u(s.begin(), s.end());
        int k = (int)u.size();
        if (k % 2 == 0) cout << "CHAT WITH HER!";
        else            cout << "IGNORE HIM!";
    }
    return 0;
}