#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1') {
                unordered_map<int, int> mpp;

                for (int l = 0; l < i; l++)
                {
                    int r = k + l - 1;
                    mpp[l + 1] = r + 1;
                }

                for (auto& pair : mpp)
                {
                    if (pair.second - pair.first + 1 == n) {

                    }
                }
            }
        }

    }

    return 0;
}