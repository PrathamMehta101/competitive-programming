#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll x) {
    if (x == 1) return false;

    for (ll i = 2; i < x / 2; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void solve() {
    ll x, k;
    cin >> x >> k;

    if (k > 1 && x > 1) {
        cout << "NO" << endl;
        return;
    }


    // constructing y
    string str;
    for (ll i = 0; i < k; i++) {
        str += to_string(x);
    }
    ll y = stoll(str);

    if (isPrime(y)) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}