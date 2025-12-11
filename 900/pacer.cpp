#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(n);
    for (auto& pair : v) {
        cin >> pair.first;
        cin >> pair.second;
    }

    bool followingOriginalOrder = true;
    int pt = 0;
    int points = 0;
    for (int i = 0; i < n; i++) {
        int ct = v[i].first, cs = v[i].second;

        if (ct % 2 == 0 && cs == 0) {
            if (followingOriginalOrder) {
                points += ct - pt;
            }
            else {
                points += ct - pt - 1;
            }
            pt = ct;
            followingOriginalOrder = true; // this is a case of the original order hence order is reserved
        }
        else if (ct % 2 == 0 && cs == 1) {
            if (!followingOriginalOrder) {
                points += ct - pt;
            }
            else {
                points += ct - pt - 1;
            }

            pt = ct;
            followingOriginalOrder = false; // this case will force the order to break
        }
        else if (ct % 2 == 1 && cs == 0) {
            if (!followingOriginalOrder) {
                points += ct - pt;
            }
            else {
                points += ct - pt - 1;
            }

            pt = ct;
            followingOriginalOrder = false;
        }
        else {
            if (followingOriginalOrder) {
                points += ct - pt;
            }
            else {
                points += ct - pt - 1;
            }

            pt = ct;
            followingOriginalOrder = true;
        }
    }
    points += m - pt;
    cout << points << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}