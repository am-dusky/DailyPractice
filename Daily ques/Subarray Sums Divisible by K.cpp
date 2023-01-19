int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        map[0] = 1;
        int sum = 0;
        int cnt=0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            int rem = sum % k;
            if(rem<0) rem+=k;
            if(map.find(rem)!=map.end()){
                cnt+=map[rem];
            }
             map[rem]++;
            
        }
        return cnt;
    }
