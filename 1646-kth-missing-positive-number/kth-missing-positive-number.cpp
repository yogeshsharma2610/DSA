class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
int j = 1;

while(j <= arr.size() + k) {
    if(mpp.find(j) == mpp.end()) {
        ans.push_back(j);
    }
    j++;
}
      return ans[k-1];
    }
};