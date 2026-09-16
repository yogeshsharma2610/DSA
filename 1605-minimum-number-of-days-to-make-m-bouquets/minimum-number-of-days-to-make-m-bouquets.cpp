class Solution { 
public: 
    bool yogesh(vector<int>& bloomDay, int m, int k, long long mid) { 
        int cnt = 0; 
        int p = 0; 

        for(int i = 0; i < bloomDay.size(); i++) { 
            if(bloomDay[i] <= mid) { 
                cnt++; 
            } 
            else { 
                p += cnt / k; 
                cnt = 0; 
            } 
        } 

        p += cnt / k; 

        if(p >= m) return true; 
        else return false; 
    } 

    long long maxi(vector<int>& bloomDay) { 
        long long maxx = INT_MIN; 

        for(int i = 0; i < bloomDay.size(); i++) { 
            if(bloomDay[i] > maxx) { 
                maxx = bloomDay[i]; 
            } 
        } 

        return maxx; 
    } 

    int minDays(vector<int>& bloomDay, int m, int k) { 
        if(1LL * m * k > bloomDay.size()) return -1; 

        long long high = maxi(bloomDay); 
        long long low = 1; 
        long long x = LLONG_MAX; 

        while(low <= high) { 
            long long mid = low + (high - low) / 2; 

            bool c = yogesh(bloomDay, m, k, mid); 

            if(c == true) { 
                x = min(x, mid); 
                high = mid - 1; 
            } 
            else { 
                low = mid + 1; 
            } 
        } 

        return x; 
    } 
};