#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int greater = 0, lesser = 0;
        int el = v[0];

        int midx = ceil(n / 2) - 1;
        int sidx;

        if (el > 0) {
            for (int i = 0; i < n; i++) {
                if (v[i] > v[0]) greater++;
                if (abs(v[i]) < v[0] && v[i] < 0) lesser++;
            }

            sort(v.begin(), v.end());
            for (int i = 0; i < n; i++) if (v[i] == el) sidx = i;

            if (sidx == midx) cout << "YES" << endl;
            else if (sidx < midx) {
                if (greater >= abs(sidx - midx)) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else {
                if (lesser >= (sidx - midx)) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
        else {
        }

    }
    return 0;
}