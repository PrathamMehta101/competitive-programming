#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPerfectSquare(string s) {
    ll x = stoi(s);
    if (x >= 0) {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (isPerfectSquare(s)) {
            ll x = stoi(s);
            ll sr = sqrt(x);
            cout << 0 << " " << sr << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}