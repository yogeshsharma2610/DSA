class Solution {
public:
bool mm(vector<int> &nums ,int k,int mid){
    int sum=0;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>mid){
            cnt++;
            sum=0;
            sum+=nums[i];
        }
    }
     cnt++;
     if(cnt<=k){
            return true;
        }
    return false;
}
int minnn(vector<int> &nums){
    int minn=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>minn){
            minn=nums[i];
        }
    }
    return minn;
}
int count(vector<int> &nums){
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        cnt+=nums[i];
    }
    return cnt;
}
    int splitArray(vector<int>& nums, int k) {
                int low=minnn(nums);
        int p=INT_MAX;
        int high=count(nums);
        while(high>=low){
            int mid =low+(high-low)/2;
            bool c=mm(nums,k,mid);
            if(c==true){
                p=min(p,mid);
                high=mid-1;
            }
            else{
                low=mid+1;;
            }
        }
        return p;
    }
};