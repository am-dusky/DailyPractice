void sumtree(TreeNode* root,int &sum){
        if(!root)
            return;
        sumtree(root->left,sum);
        sum+=root->val;
        sumtree(root->right,sum);
    }
    
    
    int  solve(TreeNode* root){
        if(!root)
            return 0;
        int a=solve(root->left);
        int b=solve(root->right);
        int x=root->val;
        root->val=abs(a-b);
        return a+b+x;
    }
    
    int findTilt(TreeNode* root) {
        solve(root);
        int sum=0;
        sumtree(root,sum);
        return sum;
    }
