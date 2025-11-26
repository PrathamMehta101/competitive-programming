#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    // check min of maxUnsorted and maxSorted
    int maxUnsorted = 1, maxSorted = 1, sorted = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            sorted++;
            maxSorted = max(sorted, maxSorted);
        }
        else {
            maxUnsorted++;
            sorted = 1; // the new element will be a part of the sorted array
        }
    }

    int ans = 0;
    if (maxSorted > maxUnsorted) { // i have more sorted elements
        ans = maxUnsorted;
    }
    else if (maxSorted < maxUnsorted) { // i have more unsorted elements
        ans = maxSorted;
    }
    else { // i have equal number of sorted and unsorted elements (def overlapping case)
        maxSorted--; // removing the sorted element value from here 
        ans = maxSorted;
    }

    cout << ans << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}