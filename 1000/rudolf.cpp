#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n - 2; i++) {
        int op = a[i];
        if (op < 0) {
            cout << "NO" << endl;
            return;
        }
        a[i] -= op; // will always turn zero if not for the above check
        a[i + 1] -= 2 * op;
        a[i + 2] -= op;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}