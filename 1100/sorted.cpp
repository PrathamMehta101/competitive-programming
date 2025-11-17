class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> sorted_segs = {0};
        int maxlen = 0;
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] < nums[i-1]) sorted_segs.push_back(i);
        }

        sorted_segs.push_back(nums.size() - 1);

        for(int i=1; i<sorted_segs.size(); i++) {
            if(i == nums.size() - 1) continue; // last element
            int el = nums[i];
            if(nums[i-1] < nums[i+1]) {
                maxlen = max(maxlen, sorted_segs[i] - sorted_segs[i-1] + 1);
            } else {
                maxlen = max(maxlen, sorted_segs[i+1] - sorted_segs[i-1] + 1);
            }
        }
        
        return maxlen;
    }
};©leetcode