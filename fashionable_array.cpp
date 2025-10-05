#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, vector<int> v) {
    int mn = 0, mx = n - 1;
    int rem = 0;

    while (mn < mx)
    {
        if ((v[mn] + v[mx]) % 2 == 0) break;
        else {
            if (((v[mn + 1] + v[mx]) % 2) == 0) mn++;
            else if (((v[mn] + v[mx - 1]) % 2) == 0) mx--;
            else mn++;
        }
        rem++;
    }

    cout << rem << endl;
}

int main() {
    ll t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        solve(n, v);
    }
    return 0;

}