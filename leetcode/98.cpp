class Solution {
public:
    int getMinValue(TreeNode* root){
        int min_value; 
        int curr_value = root->val; 
        if(!root->left && !root->right) min_value = root->val; 
        else if(root->left && !root->right) min_value = getMinValue(root->left); 
        else if(!root->left && root->right) min_value = getMinValue(root->right);
        else min_value = min(getMinValue(root->right), getMinValue(root->left));
        
        return min(curr_value, min_value); 
    }
    
    int getMaxValue(TreeNode* root){
        int max_value; 
        int curr_value = root->val; 
        if(!root->left && !root->right) max_value = root->val; 
        else if(root->left && !root->right) max_value = getMaxValue(root->left); 
        else if(!root->left && root->right) max_value = getMaxValue(root->right);
        else max_value = max(getMaxValue(root->right), getMaxValue(root->left));
        
        return max(curr_value, max_value); 
    }
    bool isValidBST(TreeNode* root) {
        bool valid_left = true; 
        bool valid_right = true; 
        
        if(!root) return true; 
        
        if(root->left){
            int max_value = getMaxValue(root->left); 
            valid_left = (root->val > max_value) && isValidBST(root->left); 
        }
        
        if(root->right){
            valid_right =  (root->val < getMinValue(root->right)) && isValidBST(root->right); 
        }
        
        return valid_left && valid_right; 
    }
};

/*
time complexity: O(E + V)
space complexity: O(V)
*/