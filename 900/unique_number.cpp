#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n > 45) {
            cout << -1 << endl;
        }
        else {
            vector<int> v;
            int number = 0;

            for (int i = 9; i > 0; i--)
            {
                if (number + i <= n) {
                    number += i;
                    v.push_back(i);
                }
            }

            sort(v.begin(), v.end());

            string s;

            for (int i = 0; i < v.size(); i++)
            {
                s += to_string(v[i]);
            }

            cout << stoi(s) << endl;
        }
    }


    return 0;
}