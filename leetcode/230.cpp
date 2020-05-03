void inordersort(TreeNode* root, vector<int>& r){        
    if(root->left) inordersort(root->left, r); 
    
    r.push_back(root->val);
    
    if(root->right) inordersort(root->right, r);

}
int kthSmallest(TreeNode* root, int k) {
    vector<int> inorder; 
    inordersort(root, inorder);
    
    return inorder[k - 1]; 
}

/*
time complexity: O(N)
space complexity: O(N)
*/