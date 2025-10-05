#include<bits/stdc++.h>
using namespace std;

int main() {
    // longest subarray with sum <= k
    vector<int> a = { 2,5,1,7,10 };
    int k = 14;
    int maxlen = 0;

    // brute force
    for (int i = 0; i < a.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < a.size(); j++)
        {
            sum += a[j];
            if (sum <= k) maxlen = max(maxlen, j - i + 1);
            else if (sum > k) break;
        }
    }

    // better
    int sum2 = 0;
    int l = 0, r = 0, maxlen2 = 0;

    while (r < a.size()) {
        sum2 += a[r];

        while (sum2 > k) { // if in case
            sum2 = sum2 - a[l];
            l = l + 1;
        }

        if (sum2 <= k) {
            maxlen = max(maxlen, r - l + 1);
            // store l and r
            r += 1;
        }

        // number of subarrays


        return 0;
    }