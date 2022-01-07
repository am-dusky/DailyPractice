int majorityElement(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int num:nums){
            if(count==0)
                ans=num;
            if(num==ans)
                count+=1;
            else
                count--;
        }
        return ans;
    }
