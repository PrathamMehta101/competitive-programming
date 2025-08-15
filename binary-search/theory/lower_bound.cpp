#include<iostream>
using namespace std;

int lower_bound(vector<int>& nums, int target) {
    int lower_bound = nums.size();
    int low = 0, high = nums.size() - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(nums[mid] >= target) {
            lower_bound = mid;
            high = mid - 1; // searching for a smaller index
        } else {
            low = mid + 1;
        }
    }

    return lower_bound;
}

int main() {
    return 0;
}