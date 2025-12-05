#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;

    ll n = s.length();
    // start at 1, stop at 0 take that length and store it
    // start = start + 1 and do the same 

    ll left = 0, right = 0;
    ll answer = 0;

    ll i;
    for (i = 0; i < n; i++) {
        if (s[i] == '1') {
            left = i;
            break;
        }
    }

    if (i == n) {
        cout << 0 << endl; // no 1s;
        return;
    }

    right = left;

    while (right < n - 1) {
        right++;
        if (s[right] == '0') {
            answer += right - left + 1;
            left++;
        }
    }

    cout << answer << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}