class Solution {
  public:
    bool canWePlace(vector<int> &stalls, int k, int minDist) {
      int count = 1, last = stalls[0];
      
      for(int i=1; i<stalls.size(); i++) {
          if(stalls[i] - last >= minDist) {
              count++;
              last = stalls[i];
          } 
      }

        if(count >= k) return true;
        else return false;   
    }
  
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int ans;

        sort(stalls.begin(), stalls.end());
        
        int maxDist = stalls.back() - stalls.front();
        
        // for(int i=1; i<=maxDist; i++) {
        //     if(canWePlace(stalls, k, i)) ans = i;
        //     else break;
        // }

        int low = 1, high = maxDist;

        while(low <= high) {
            int mid = (low + high) / 2;
            if(canWePlace(mid)) low = mid + 1;
            else high = mid - 1; 
        }

        return high;
        
        // return ans;
    }
};