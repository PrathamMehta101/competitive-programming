#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y; // x-ones, y-twos 
        vector<int> a(x + y);

        for (int i = 0; i < x; i++)
            a[i] = 1;

        for (int j = x; j < x + y; j++)a[j] = 2;


        // cout << "VECTOR PRINTING" << endl;
        // for (int i = 0; i < x + y; i++) {
        //     cout << a[i] << " ";
        // }

        // cout << endl;

        // [1,1,1,1,2,2] // 1s->4, 2s->4 (1,1,2) optimal
        // [1,1,2,2,2,2] // 1s->2, 2s>4 (1,1,2) optimal
        // try to get 2 in the most number of places possible

        int l = 0, r = x + y - 1;

        int maxSum = 0;

        while (l < r)
        {
            // cout << "L: " << l << endl;
            // cout << "R: " << r << endl;

            int el1 = a[l];
            int el2 = a[l + 1];
            int el3 = a[r];
            maxSum += max({ el1, el2, el3 });
            // cout << "maxSum: " << maxSum << endl;
            l = l + 2;
            r = r - 1;
        }

        cout << maxSum << endl;
    }

    return 0;
}