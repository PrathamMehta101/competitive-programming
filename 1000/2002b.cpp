#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    // if same or reversed, bob wins
    bool same = true, reversed = true;

    // same
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            same = false;
            break;
        }
    }

    // reversed
    for (int i = 0; i < n; i++) {
        if (a[i] != b[n - i - 1]) {
            reversed = false;
            break;
        }
    }

    if (same || reversed) {
        cout << "Bob" << endl;
    }
    else {
        cout << "Alice" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}