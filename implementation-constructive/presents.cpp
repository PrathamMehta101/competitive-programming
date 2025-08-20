#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    unordered_map<int, int> mpp;

    while(n--) {
        cin >> arr[i];
    }   

    for(int i=0; i<arr.size(); i++) {
        mpp[arr[i]] = i+1; 
    }    
}

// 2<-1, 3<-2, 4<-3, 1<-4
// 1->4, 2->1, 3->2, 4->3