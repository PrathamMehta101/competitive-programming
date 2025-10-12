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
        cin >> s;

        string ans(n, '+');

        int top = 0, bottom = n - 1;
        for (int i = 0; i < k; i++) {
            if (s[i] == '0') {
                if (ans[top - 1] == '?') {
                    ans[top - 1] = '-';
                    ans[top] = '?';
                }
                else {
                    ans[top] = '-';
                }

                top++;
            }
            else if (s[i] == '1') {
                if (ans[bottom + 1] == '?') {
                    ans[bottom + 1] = '-';
                    ans[bottom] = '?';
                }
                else {
                    ans[bottom] = '-';
                }
                bottom--;
            }
            else if (s[i] == '2') {
                if (s.length() == 1) {
                    ans[top] = '-';
                }
                else {
                    ans[top] = '?';
                    ans[bottom] = '?';
                    top++;
                    bottom--;
                }
            }
        }

        cout << ans << endl;

    }


    return 0;
}


// 7 5 
// + + + + + + + 
// - - ? + ? - -