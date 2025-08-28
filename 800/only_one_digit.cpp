#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        vector<int> digits;
        string x_string = to_string(x);

        for (int i = 0; i < x_string.length(); i++)
        {
            digits.push_back(x_string[i] - '0');
        }

        sort(digits.begin(), digits.end());

        cout << digits[0] << endl;
    }

    return 0;
}