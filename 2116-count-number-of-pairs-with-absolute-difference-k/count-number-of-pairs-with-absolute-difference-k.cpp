class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int c=nums[j]-nums[i];
                if(abs(c)==k) cnt++;
            }
        }
        return cnt;
    }
};