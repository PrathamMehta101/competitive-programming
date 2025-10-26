#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, l, r;
    cin >> n >> k >> l >> r;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int count = 0;
    for (int i = l; i <= r; i++) {
        set<int> d = {};
        int left = 0, right = i - 1;
        for (int j = left; j <= right; j++) d.insert(a[j]);
        if (d.size() == k) count++;

        while (right < n - 1)
        {
            d.erase(a[left]);
            left++;
            right++;
            d.insert(a[right]);
            if (d.size() == k) count++;
        }
    }

    cout << "ANS: " << count << endl;
}


int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}