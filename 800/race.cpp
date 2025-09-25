#include<bits/stdc++.h>
using namespace std;

void solve(int a, int x, int y) {

    // the point he choses c - x and c - y < a - x && a - y

    if (a < x && a < y) {
        // alice stands before the prices
        cout << "YES" << endl;
        return;
    }
    else if (a > x && a > y) {
        cout << "YES" << endl;
        return;
    }
    else {
        int min_dist = INT_MAX;
        for (int i = min(x, y); i < max(x, y); i++)
        {
            if (i == a) continue;
            int bob_max_dist = max(abs(i - x), abs(i - y));
            int alice_min_dist = abs(a - min(x, y));
            if (min_dist < alice_min_dist) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;
        solve(a, x, y);
    }
    return 0;
}