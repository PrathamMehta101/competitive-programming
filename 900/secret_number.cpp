#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> ans;
        ll count = 0;
        ll p = 1;
        ll divisor = 10 * p + 1;

        while (divisor <= n) {
            if (n % divisor == 0) {
                ans.push_back(n / divisor);
                count++;
            }
            p = p * 10;
            divisor = 10 * p + 1;
        }

        cout << count << endl;
        for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
        if (count > 0) cout << endl;
    }
    return 0;
}
