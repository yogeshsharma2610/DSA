class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
     for(int i=1;i<=nums.size()+1;i++){
        if(mpp.find(i)==mpp.end()) return i;
     }
     return 2;
    }
};