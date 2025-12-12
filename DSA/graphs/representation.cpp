#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, vector<int>> adj;

    for (vector<int>& vec : prerequsities) {
        int v = vec[1];
        int u = vec[0];
        adj[u].push_back(v);
    }

    return solve(adj);

    return 0;
}