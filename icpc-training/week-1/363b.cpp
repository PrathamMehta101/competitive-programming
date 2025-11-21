#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    // first window settings 
    int sum = 0, minSum = INT_MAX, ans = 1;
    for (int i = 0; i < k; i++) sum += h[i];

    minSum = min(minSum, sum);

    // sliding window 
    int l = 0, r = k - 1;
    while (r < n - 1) {
        sum -= h[l];
        l++;
        r++;
        sum += h[r];

        if (sum < minSum) {
            minSum = sum;
            ans = l + 1;
        }
    }

    cout << ans << endl;

    return 0;
}