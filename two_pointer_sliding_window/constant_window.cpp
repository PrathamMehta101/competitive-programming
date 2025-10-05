#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = { -1,2,3,3,4,5,-1 };
    int k = 4; // window size
    int l = 0, r = k - 1;

    // initial sum
    int sum = 0, maxSum = 0;
    for (int i = l; i <= r; i++) {
        sum += arr[i];
    }

    while (r < arr.size() - 1) {
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        maxSum = max(maxSum, sum);
    }

    return 0;
}