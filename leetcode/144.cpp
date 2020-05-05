void preorder(TreeNode* root, vector<int>& result){
    result.push_back(root->val);
    
    if(root->left) preorder(root->left, result); 
    
    
    if(root->right) preorder(root->right, result);
}
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result; 
    
    if(!root) return result; 
    
    preorder(root, result); 
    
    return result; 
}

