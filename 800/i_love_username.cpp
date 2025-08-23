#include<bits/stdc++.h>
using namespace std;

bool checkAmazingPerformace(vector<int> v, int performance) {
    if(performance == 0) return false;

    int performanceScore = v[performance];

    vector<int> currentSortedPerformances;

    for(int i=0; i<performance; i++) currentSortedPerformances.push_back(v[i]);

    sort(currentSortedPerformances.begin(), currentSortedPerformances.end());

    if(performanceScore > currentSortedPerformances.back() || performanceScore < currentSortedPerformances[0]) return true;
    else return false;

}


int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int amazingPerformances = 0;
    for(int i=0; i<n; i++) {
        if(checkAmazingPerformace(v, i)) {
            amazingPerformances++;
        } 
    }

    cout << amazingPerformances << endl;

    return 0;
}