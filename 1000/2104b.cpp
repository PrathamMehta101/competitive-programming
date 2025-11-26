#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> prefix(n);
    vector<ll> suffix(n);
    suffix[n - 1] = a[n - 1];
    ll m = a[0];
    prefix[0] = m;
    for (ll i = 1;i < n;i++) {
        m = max(a[i], m);
        prefix[i] = m;
    }

    for (int i = n - 2; i >= 0; i--) suffix[i] = a[i] + suffix[i + 1];


    ll idx = n - 1;
    while (idx >= 0) {
        ll sum = suffix[idx] - a[idx] + prefix[idx];
        cout << sum << " ";
        idx--;
    }

    cout << endl;

}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}