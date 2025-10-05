#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n) {
    int divisors = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) divisors++;
    }

    if (divisors == 2) return true;
    else return false;

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = 0; i < n; i++) {
            int n1 = v[i];
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                int n2 = v[j];
                if (check_prime(n1 + n2)) count += 1;
            }
        }

        cout << count / 2 << endl; //repeat pairs        
    }

    return 0;
}