 void solve(TreeNode* root,int &sum){
        if(!root)
            return;
        if(root->left){
            TreeNode* temp=root->left;
            if(temp->left==NULL and temp->right==NULL)
                sum+=root->left->val;
            solve(root->left,sum);
        }
        solve(root->right,sum);
    }
    
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        solve(root,sum);
        return sum;
    }
