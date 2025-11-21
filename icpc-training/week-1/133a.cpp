#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int i;
    for (i = 0; i < s.size(); i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    solve();
    return 0;
}