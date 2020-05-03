class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {        
        while(root){
            if(val == root->val) return root; 
            if(val < root->val) root = root->left;
            else root = root->right;
        }
        
        return root;
    }
};

/*
time complexity: log(H)The number of nodes in the tree is between 1 and 1000.
node.val is 0 or 1.
The answer will not exceed 2^31 - 1.e tree
space complexity: O(1)
*/