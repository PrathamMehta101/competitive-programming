#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++) mx = max(v[i], mx);
    for (int i = 0; i < n; i++) mn = min(v[i], mn);

    int ans = mx;

    while (true)
    {
        ans--;
        if (mx % ans != 0 && mn % ans != 0) break;
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}