#include<bits/stdc++.h>
#include<numeric>
#define ll long long 
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll minEl = a[0];
    vector<ll> multiples;
    for (int i = 1; i < n; i++) {
        if (a[i] % minEl == 0) multiples.push_back(a[i]);
    }


    if (multiples.empty()) {
        cout << "No" << endl;
        return;
    }

    ll g = multiples[0];
    for (int i = 1; i < multiples.size(); i++) {
        g = gcd(g, multiples[i]);
    }

    if (g == minEl) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}