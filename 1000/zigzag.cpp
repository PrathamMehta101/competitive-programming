#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> prefix;
    int prefMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        prefMax = max(prefMax, a[i]);
        prefix.push_back(prefMax);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] <= prefix[i] && i % 2 != 0) a[i] = prefix[i];
    }

    int points = 0;
    for (int i = 1; i < n; i = i + 2) {
        if (i < n - 1) {
            if (a[i - 1] < a[i] && a[i + 1] < a[i]) {
                continue;
            }
            else {
                if (a[i - 1] == a[i]) {
                    a[i - 1]--;
                    points++;
                }

                if (a[i + 1] >= a[i]) {
                    int decide = a[i + 1] - a[i] + 1;
                    points += decide;
                    a[i + 1] -= decide;
                }
            }
        }

        if (i == n - 1) {
            if (a[i - 1] == a[i]) {
                points++;
            }
        }
    }

    cout << points << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

