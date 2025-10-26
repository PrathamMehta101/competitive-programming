#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(ll l, ll r) {
    ll rs = (
        r / 2 + r / 3 + r / 5 + r / 7
        - r / (2 * 3) - r / (2 * 5) - r / (2 * 7) - r / (3 * 5) - r / (3 * 7) - r / (5 * 7)
        + r / (2 * 3 * 5) + r / (2 * 3 * 7) + r / (2 * 5 * 7) + r / (3 * 5 * 7)
        - r / (2 * 3 * 5 * 7)
        );

    ll ls = (
        l / 2 + l / 3 + l / 5 + l / 7
        - l / (2 * 3) - l / (2 * 5) - l / (2 * 7) - l / (3 * 5) - l / (3 * 7) - l / (5 * 7)
        + l / (2 * 3 * 5) + l / (2 * 3 * 7) + l / (2 * 5 * 7) + l / (3 * 5 * 7)
        - l / (2 * 3 * 5 * 7)
        );

    cout << rs - ls << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        solve(l, r);
    }


    return 0;
}