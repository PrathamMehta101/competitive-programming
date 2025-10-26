#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (2 * k > n) {
        cout << "Alice" << endl;
    }
    else {
        int ones = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones++;
        }

        if (ones <= k) {
            cout << "Alice" << endl;
        }
        else {
            cout << "Bob" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}