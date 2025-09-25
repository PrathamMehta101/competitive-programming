#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, s = 0, c = 0, oc = 0;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<>()); //(3,2,1)

        vector<int> cakes = a;

        while (s < m) {
            // pick the cake
            c += cakes[oc]; //3, 4
            cakes[oc] = 0;

            // a second passes 
            s++; //1 //2
            oc++; //1 //2

            // oven updates
            for (int i = 0; i < a.size(); i++) cakes[i] += a[i];

            // set vars for next iteration
            if (oc >= a.size()) oc = 0;
        }

        cout << c << endl;
    }
    return 0;
}