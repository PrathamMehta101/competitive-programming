#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> binary(n); // 1 -> can go, 0 -> cannot go
    for (ll i = 0; i < n; i++) {
        if (a[i] <= q) binary[i] = 1;
        else binary[i] = 0;
    }

    // select consecutive ones segments
    ll div;
    ll seg = 0, ways = 0, i = 0;
    for (i = 0; i < n; i++) {
        if (binary[i] == 1) seg++;
        else {
            if (seg < k) {
                seg = 0;
                continue;
            };
            // number of ways to select at most k pairs from the start
            ways += (seg - k + 1) * (seg - k + 2) / 2;
            seg = 0;
        }
    }

    if (seg >= k)
        ways += (seg - k + 1) * (seg - k + 2) / 2;

    cout << ways << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}