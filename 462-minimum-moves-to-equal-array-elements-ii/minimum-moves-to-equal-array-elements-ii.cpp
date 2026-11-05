class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int cnt = 0;

        if (nums.size() % 2 != 0) {
            int mid = (0 + nums.size() - 1) / 2;

            for (int i = 0; i < nums.size(); i++) {
                if (i == mid) continue;
                else {
                    cnt = abs(nums[mid] - nums[i]);
                    ans += cnt;
                }
            }
        }

        if (nums.size() % 2 == 0) {
            int mid = (0 + nums.size() - 1) / 2;

            for (int i = 0; i < nums.size(); i++) {
                if (i == mid) continue;
                else {
                    cnt = abs(nums[mid] - nums[i]);
                    ans += cnt;
                }
            }
        }

        return ans;
    }
};