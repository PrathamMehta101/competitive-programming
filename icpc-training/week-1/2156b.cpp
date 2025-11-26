#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> a(q);
    for (int i = 0; i < q;i++) cin >> a[i];

    // even if we have 1 b, we dont have a problem at all coz max time complexity -> O(30n)
    // however, if we have no bs and only as in the string, return a[i] as the time

    bool b_exist = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            b_exist = true;
            break;
        }
    }


    vector<int> times;

    if (b_exist) {
        for (int i = 0; i < q; i++) {
            int el = a[i];
            int m = 0;
            int t = 0;
            while (el != 0)
            {
                if (s[m % n] == 'B') {
                    el /= 2;
                }
                else if (s[m % n] == 'A') {
                    el--;
                }
                m++;
                t++;
            }
            times.push_back(t);
        }
    }
    else {
        for (int i = 0; i < q; i++) {
            times.push_back(a[i]);
        }
    }

    for (int i = 0; i < q; i++) cout << times[i] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}