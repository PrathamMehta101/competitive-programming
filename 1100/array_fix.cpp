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

        string s;
        for (int i = 0; i < n; i++) s += to_string(v[i]);

        vector<int> res;
        for (int i = 0; i < s.length(); i++) {
            res.push_back(s[i] - '0');
        }

        bool ans = true;

        for (int i = 0; i < res.size() - 1; i++)
        {
            if (res[i + 1] >= res[i]) continue;
            else {
                ans = false;
                break;
            }
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}