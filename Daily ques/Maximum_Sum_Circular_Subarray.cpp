/*
918. Maximum Sum Circular Subarray

Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] 
and the previous element of nums[i] is nums[(i - 1 + n) % n].

A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j],
there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.*/

int help(vector<int>&nums){
        int n=nums.size();
        int maxi=-1e9;
        int sum=0;
        for(int k=0;k<n;k++){
            sum+=nums[k];
            maxi=max(sum,maxi);
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        
        int s1=help(nums);
        int sum=0;
        int pos=0;
        int a3=-1e9;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            a3=max(a3,nums[i]);
            if(nums[i]>0)
                pos=1;
        }
        if(pos==0)
            return a3;
        int min_ending_here = INT_MAX;
        int min_so_far = INT_MAX;
    
        for (int i=0; i<n; i++)
        {
            if (min_ending_here > 0)
                min_ending_here =nums[i]; 
            else
                min_ending_here += nums[i];
            min_so_far = min(min_so_far, min_ending_here);           
        }
     
        int a2=sum-(min_so_far);
        return max(s1,a2);
    }int help(vector<int>&nums){
        int n=nums.size();
        int maxi=-1e9;
        int sum=0;
        for(int k=0;k<n;k++){
            sum+=nums[k];
            maxi=max(sum,maxi);
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        
        int s1=help(nums);
        int sum=0;
        int pos=0;
        int a3=-1e9;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            a3=max(a3,nums[i]);
            if(nums[i]>0)
                pos=1;
        }
        if(pos==0)
            return a3;
        int min_ending_here = INT_MAX;
        int min_so_far = INT_MAX;
    
        for (int i=0; i<n; i++)
        {
            if (min_ending_here > 0)
                min_ending_here =nums[i]; 
            else
                min_ending_here += nums[i];
            min_so_far = min(min_so_far, min_ending_here);           
        }
     
        int a2=sum-(min_so_far);
        return max(s1,a2);
    }
