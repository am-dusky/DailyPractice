class Solution {
public:
    void solve(vector<int>& nums,set<vector<int>>&ans,int i,vector<int>temp){
        if(i>=nums.size()){
            if(temp.size()>1) ans.insert(temp);
            return;
        }
        if(temp.size()==0 || nums[i]>=temp.back()) {
            temp.push_back(nums[i]);
            solve(nums,ans,i+1,temp);
            temp.pop_back();
            solve(nums,ans,i+1,temp);
        }
        else{
            solve(nums,ans,i+1,temp);
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>a;
        set<vector<int>>ans;
        vector<int>temp;
        solve(nums,ans,0,temp);
        for(auto it:ans){
            a.push_back(it);
        }
        return a;
    }
};
