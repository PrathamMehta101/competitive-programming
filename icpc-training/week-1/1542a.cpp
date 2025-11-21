#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> v[i];

    int co = 0, ce = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (v[i] % 2 == 0) ce++;
        else co++;
    }

    if (co != ce) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}