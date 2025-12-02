#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> prefix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++) {
        prefix[i] = a[i] + prefix[i - 1];
    }

    ll ans = 0, maxEl = a[0];

    for (int i = 0; i < n; i++) {
        maxEl = max(maxEl, a[i]);
        if (prefix[i] - maxEl == maxEl) ans++;
    }

    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}