// NOTE: MOST OPTIMAL SOLUTION




// NOTE: ANOTHER WORKING SOLUTION BUT FIND A BETTER ONE
// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         if(nums.size() == 1) return nums[0];
        
//         for(int i=0; i<nums.size(); i++) {
//             if(i == 0) 
//                 {if(nums[i] != nums[i+1]) return nums[i];}
//              else if (i == nums.size() - 1) 
//                { if(nums[i] != nums[i-1]) return nums[i];}
//              else 
//                 {if(nums[i] != nums[i+1] && nums[i] != nums[i-1]) return nums[i];}
//         }

//         return -1;
//     }
// };


// NOTE: WORKS BUT FIND A BETTER SOLUTION
// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         unordered_map<int, int> mpp;
//         int answer;

//         for(int i=0; i<nums.size(); i++) {
//             mpp[nums[i]]++;    
//         }    


//         for(auto &pair: mpp) {
//             if(pair.second == 1) {
//                 answer = pair.first;
//             }
//         }

//         return answer;
//     }
// };