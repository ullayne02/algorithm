void dfs(vector<string>& out, TreeNode* root, string curr_path){
        
        if(curr_path == ""){
            curr_path = to_string(root->val);
        }else{
            curr_path = curr_path + "->" + to_string(root->val); 
        }
        
        if(!root->left && !root->right) out.push_back(curr_path);
        
        if(root->left) dfs(out, root->left, curr_path); 
        
        if(root->right) dfs(out, root->right, curr_path); 
        
    
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> out; 
        
        if(!root) return out; 
        
        dfs(out, root, ""); 
        
        return out; 
    }
};

/*
time complexity: O(V + E)
Space Complexity: O(E)
*/