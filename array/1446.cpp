int maxPower(string s) {
        int maxi=1;
        if(s.length()==1)
            return 1;
        int count=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                count++;
                if(count>maxi)
                    maxi=count;
            }
            else
                count=1;
        }
        return maxi;
    }
