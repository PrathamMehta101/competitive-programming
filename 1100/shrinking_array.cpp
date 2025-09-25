#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& a, int n) {

    for (int i = 1; i < n; i++) {
        if (abs(a[i - 1] - a[i]) <= 1) {
            cout << 0 << endl;
            return;
        }
    }

    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
            cout << 1 << endl;
            return;
        }

        if (a[i - 1] > a[i] && a[i + 1] > a[i]) {
            cout << 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        solve(a, n);
    }
    return 0;
}