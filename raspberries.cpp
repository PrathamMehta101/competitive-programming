#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        vector<int> rem(n);
        int m = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (v[i] % k != 0) {
                rem[i] = k - (v[i] % k);
            }
            else {
                rem[i] = 0;
            }
            m = min(rem[i], m);
        }

        cout << m << endl;
    }

    return 0;
}