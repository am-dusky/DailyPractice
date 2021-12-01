 vector<int> getAverages(vector<int>&a, int k) {
        int n=a.size();
        vector<int>ans(n,-1);
        int p=2*k+1;
        
        if(p>n) return ans;
        long long s=0,sum=0;
        
        for(int i=0 ;i<p;i++) {
            sum+=a[i];
        }
        ans[k]=sum/p;
        
        int i=p,j=k+1;
        while(i<n){
            sum+=a[i]-a[s];
            ans[j]=sum/p;
            s++;
            i++;
            j++;
         }
        return ans;
    }
