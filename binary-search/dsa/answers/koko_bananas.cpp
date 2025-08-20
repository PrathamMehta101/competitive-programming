class Solution {
public:
    bool canEatBananas(vector<int>& piles, int speed, int h) {
        int hours = 0;
        for(int i=0; i<piles.size(); i++) {
            int currentPile = piles[i];
            
            while(currentPile > 0) {
                currentPile -= speed;
                hours++;
            }
        }

        if(hours <= h) return true;
        else return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
         // min speed = 1, max speed = max(piles)
        sort(piles.begin(), piles.end());
        int minSpeed = piles.front();
        int maxSpeed = piles.back();

        for(int i=maxSpeed; i>=minSpeed; i--) {
            if(canEatBananas(piles, i, h)) continue;
            else return i+1;
        }

        // int low = minSpeed, high = maxSpeed, mid;

        // while(low <= high) {
        //     mid = (low + high) / 2;
        //     if(canEatBananas(piles, mid, h)) high = mid - 1;
        //     else low = mid + 1;
        // }

        // return mid;

        return -1;
    }
};