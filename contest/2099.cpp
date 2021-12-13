vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> temp=nums;
        
        int n=nums.size()-1;
        unordered_map<int,int>mpp;
        
        sort(nums.begin(),nums.end());
        vector<int>ans;

        while(k--){
            mpp[nums[n]]++;
            n--;
        }
        for(int i:temp){
            if(mpp[i]){
                ans.push_back(i);
                mpp[i]--;
            }
        }
        return ans;
    }
