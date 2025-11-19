#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> v(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        cin >> v[i][0];
        cin >> v[i][1];
        cin >> v[i][2];
    }

    sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
        });


    for (int i = 0; i < v.size();i++) {
        // only play if the coins you get will be more
        if (k >= v[i][0] && k <= v[i][1] && v[i][2] >= k) {
            k = v[i][2];
        }
        else {
            break; // cant play further 
        }
    }

    cout << k << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}