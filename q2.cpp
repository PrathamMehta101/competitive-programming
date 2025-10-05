#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n, int j, int k) {
    if (k > 1) cout << "YES" << endl; // player will never be picked

    if (k == 1) {
        int m = INT_MIN;
        for (int i = 0; i < n; i++) m = max(m, v[i]);

        if (v[j - 1] >= m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        solve(v, n, j, k);

    }
    return 0;
}