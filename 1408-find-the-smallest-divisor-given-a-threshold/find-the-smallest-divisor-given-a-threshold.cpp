class Solution { 
public: 
    bool divide(vector<int>& nums, int threshold, int mid) { 
        long long cnt = 0; 
        
        for(int i = 0; i < nums.size(); i++) { 
            long long a = (nums[i] + mid - 1) / mid; 
            cnt += a; 
        } 
        
        if(cnt <= threshold) return true; 
        else return false; 
    } 

    int maxi(vector<int>& nums) { 
        int maxii = INT_MIN; 
        
        for(int i = 0; i < nums.size(); i++) { 
            if(nums[i] > maxii) { 
                maxii = nums[i]; 
            } 
        } 
        
        return maxii; 
    } 

    int smallestDivisor(vector<int>& nums, int threshold) { 
        int low = 1; 
        int q = INT_MAX; 
        int high = maxi(nums); 
        
        while(high >= low) { 
            int mid = low + (high - low) / 2; 
            bool c = divide(nums, threshold, mid); 
            
            if(c == true) { 
                q = min(q, mid); 
                high = mid - 1; 
            } 
            else { 
                low = mid + 1; 
            } 
        } 
        
        return q; 
    } 
};