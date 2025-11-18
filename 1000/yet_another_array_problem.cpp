#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> primes = {
    2, 3, 5, 7, 11,
    13, 17, 19, 23, 29,
    31, 37, 41, 43, 47,
    53, 59, 61, 67, 71
    };

    bool flag = false; // didnt find min element
    ll ans = 0;
    for (ll x : primes) {
        for (ll i : a) {
            if (i % x != 0) { // not divisible
                ans = x;
                flag = true; // found min element 
                break;
            }
        }

        if (flag) break;
    }


    if (!flag) {
        cout << "No" << endl;
    }
    else {
        cout << ans << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}