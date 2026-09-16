class Solution { 
public: 
    int maximum(vector<int>& weights) { 
        int max = INT_MIN; 
        for(int i = 0; i < weights.size(); i++) { 
            if(weights[i] > max) { 
                max = weights[i]; 
            } 
        } 
        return max; 
    } 

    bool ship(vector<int>& weights, int days, long long mid) { 
        long long sum = 0; 
        int cnt = 0; 

        for(int i = 0; i < weights.size(); i++) { 
            sum += weights[i]; 
            if(sum > mid) { 
                cnt++; 
                sum = 0; 
                sum += weights[i]; 
            } 
        } 

        cnt++; 

        if(cnt <= days) return true; 
        else return false; 
    } 

    long long maxii(vector<int>& weights) { 
        long long sum = 0; 
        for(int i = 0; i < weights.size(); i++) { 
            sum += weights[i]; 
        } 
        return sum; 
    } 

    int shipWithinDays(vector<int>& weights, int days) { 
        long long low = maximum(weights); 
        int q = INT_MAX; 
        long long high = maxii(weights); 

        while(high >= low) { 
            long long mid = low + (high - low) / 2; 
            bool c = ship(weights, days, mid); 

            if(c == true) { 
                q = min(q, (int)mid); 
                high = mid - 1; 
            } 
            else { 
                low = mid + 1; 
            } 
        } 

        return q; 
    } 
};