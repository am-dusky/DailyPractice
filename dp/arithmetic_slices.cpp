int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<=2)
            return 0;
        int cnt=0,res=0;
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
                cnt++;
            else
                cnt=0;
            res+=cnt;
        }
        return res;
    }
