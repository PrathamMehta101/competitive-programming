#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        // if you place n anywhere, n-1 other numbers should be placed after it to satisfy the condition
        a[0] = 1;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i == 0) {
                a[i] = 1;
            }

            if (i == 1) {
                a[i] = n;
                a[i + n] = n;
            }

            if (i == 2) {
                a[i] = n - 2;
                a[i + n - 2] = n - 2;
            }

            if (i == 3) {
                a[i] = n - 4
            }
        }

    }

    return 0;
}