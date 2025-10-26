#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(3));

    for (int i = 0; i < m; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    vector<ll> fb(n);
    fb[0] = 1;
    if (n > 1) fb[1] = 2;
    for (int i = 2; i < n; i++) {
        fb[i] = fb[i - 1] + fb[i - 2];
    }

    string s(m, ' ');

    for (int i = 0; i < m; i++) {

        ll cv = 0;
        for (int j = 0; j < n; j++) {
            cv += fb[j] * fb[j] * fb[j];
        }

        ll bv = a[i][0] * a[i][1] * a[i][2];

        if (cv > bv) {
            s[i] = '0';
            continue;
        }

        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int j = 0; j < a[i].size(); j++) {
            mn = min(mn, a[i][j]);
            mx = max(mx, a[i][j]);
        }

        if (fb[n - 1] > mn) {
            s[i] = '0';
            continue;
        }

        if (fb[n - 1] + fb[n - 2] > mx) {
            s[i] = '0';
            continue;
        }

        s[i] = '1';
    }

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
    return 0;
}