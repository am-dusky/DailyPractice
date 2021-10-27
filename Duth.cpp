Approach 1:

void sortColors(vector<int>& nums) {
        int c1=0,c2=0,c0=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                c0++;
            else if(nums[i]==1)
                c1++;
            else
                c2++;
        }
        int k=0;
        while(c0--){
            nums[k]=0;
            k++;
        }
        while(c1--){
            nums[k]=1;
            k++;
        }
        while(c2--){
            nums[k]=2;
            k++;
        }
    }


Approach 2:

 void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=0;
        
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                     swap(nums[mid],nums[high--]);
                    break;
            }
            
        }
