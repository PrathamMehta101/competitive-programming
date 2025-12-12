#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int nz = 0, no = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') nz++;
        else no++;
    }

    int mx = (nz / 2) + (no / 2);
    int mn = max(nz, no) - (n / 2);
    if (k >= mn && (k - mn) % 2 == 0 && k <= mx) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}