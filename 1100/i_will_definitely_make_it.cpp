#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        bool ans = true;

        while (v.size() > 1)
        {
            int currentTowerIndex = k;

            int currentTowerHeight = v[currentTowerIndex];
            int leftTowerHeight = v[currentTowerIndex - 1];
            int rightTowerHeight = v[currentTowerIndex + 1];
            int indexOfNearestTower;

            int nearestTowerHeight;
            if (leftTowerHeight < rightTowerHeight) {
                if (leftTowerHeight > currentTowerHeight) {
                    nearestTowerHeight = leftTowerHeight;
                    indexOfNearestTower = currentTowerHeight - 1;
                }
            }
            else {
                if (rightTowerHeight > currentTowerHeight) {
                    nearestTowerHeight = rightTowerHeight;
                    indexOfNearestTower = currentTowerHeight + 1;
                }
            }

            int timeToTeleport = nearestTowerHeight - currentTowerHeight;

            if (timeToTeleport > currentTowerHeight) {
                ans = false;
                break;
            }
            else {
                // teleported, erase the currentTower
                v.erase(v.begin() + k - 1);
                k = indexOfNearestTower - 1;
            }
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}