#include<bits/stdc++.h>
using namespace std;

void check(string s, int n, vector<int> a) {
    if (s.size() != n) {
        cout << "NO\n";
        return;
    }

    int i = 0;
    unordered_map<char, int> mpp;
    unordered_map<int, char> mpp2;

    for (i = 0; i < n; i++) {
        char c = s[i];
        int x = a[i];

        if (!mpp.count(c)) // if c does not exist in mpp
            mpp[c] = a[i];
        else if (mpp[c] != a[i]) {
            cout << "NO\n";
            return;
        }

        if (!mpp2.count(x))
            mpp2[x] = s[i];
        else if (mpp2[x] != s[i]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int m;
    cin >> m;
    vector<string> v(m);
    for (int i = 0; i < m; i++) cin >> v[i];

    for (int i = 0; i < m; i++) {
        string s = v[i];
        check(s, n, a);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}