#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int segments = 0;
        vector<int> segmentVector, lastSegment;

        for (int i = 0; i < n; i++) {
            // check if element exists in the remaining array
            if (find(v.begin() + i + 1, v.end(), v[i]) != end(v)) {
                // another element with the same value shouldn't enter the segment 
                if (find(segmentVector.begin(), segmentVector.end(), v[i]) == end(segmentVector)) {
                    segmentVector.push_back(v[i]);
                }
                else {
                    segments++; // 1
                    segmentVector.clear();
                    segmentVector.push_back(v[i]);
                }
            }
            // if a segment breaks and the next element does not match to the remaining array, the entire leftover array is a segment 
            else {
                segments++;
                break;
            }
        }

        cout << segments << endl;
    }


    return 0;
}