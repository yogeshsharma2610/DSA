class Solution {
public:
    int maxi(vector<int>& piles) {
        int maxx = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > maxx) {
                maxx = piles[i];
            }
        }
        return maxx;
    }

    long long ppp(vector<int>& nums, long long mid) {
        long long count = 0;
        for (int i = 0; i < nums.size(); i++) {
            long long d = (nums[i] + mid - 1) / mid;
            count += d;
        }
        return count;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int p = INT_MAX;
        int low = 1;
        int high = maxi(piles);

        while (low <= high) {
            int mid = (high + low) / 2;
            long long c = ppp(piles, mid);

            if (c <= h) {
                p = min(mid, p);
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return p;
    }
};