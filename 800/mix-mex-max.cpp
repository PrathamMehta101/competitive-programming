#include<bits/stdc++.h>
using namespace std;

bool check(int l, int r, vector<int> a) {
    int minEl = a[l], maxEl = a[l];
    int mex = 0;
    for (int i = l; i <= r; i++) {
        minEl = min(minEl, a[i]);
        maxEl = max(maxEl, a[i]);
    }

    vector<int> v(4);
    for (int i = l; i <= r; i++) {
        if (v[i] >= 0) v[i % 4] = 1;
    };

    for (int i = 0; i < 4; i++) {
        if (v[i] == 0) {
            mex = i;
            break;
        }
    }

    return mex == maxEl - minEl;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = 2;
    while (r < n) {
        if (!check(l, r, a)) {
            cout << "NO" << endl;
            return;
        }
        l++;
        r++;
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}