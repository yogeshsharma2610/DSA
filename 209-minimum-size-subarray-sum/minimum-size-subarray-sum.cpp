class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     int a=nums.size();
    int sum=0;
    int c=0;
    int count=INT_MAX;
    int i=0;
    int j=0;
   while (j < a) {
            sum += nums[j];

            while (sum > target && i <= j) {
                 count = min(count, j - i + 1);
                sum -= nums[i];
                i++;
            }

            if (sum == target) {
                count = min(count, j - i + 1);
            }

            j++;
        }
        if(count==INT_MAX) return  0;
        return count;
    }
};