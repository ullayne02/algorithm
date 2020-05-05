class Solution {
public:
    void getPath(TreeNode* root, vector<int>& path, string curr_string){
        curr_string += to_string(root->val); 
        
        if(!root->left && !root->right) path.push_back(stoi(curr_string, nullptr, 2));
        
        if(root->left){
            getPath(root->left, path, curr_string);
        }
        if(root->right) getPath(root->right, path, curr_string); 
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<int> paths; 
        if(!root) return 0; 
        
        getPath(root, paths, "");
        
        int sum = 0; 
        
        for(auto x: paths){
            sum += x; 
        }
        return sum;
    }
};