class Solution {
public:
    TreeNode* insertNode(TreeNode* root, TreeNode* in){
        if(!root) return in; 
        
        if(root->val > in->val){
            root->left = insertNode(root->left, in);
        }else{
            root->right = insertNode(root->right, in);
        }
        
        return root; 
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root; 
        
        if(root->val < key){
            root->right = deleteNode(root->right, key);
        }else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }
        
        if(key == root->val){
            if(root->left && root->right){
                TreeNode* aux = root->left; 
                root = insertNode(root->right, aux);
            }else if(root->left){
                root = root->left;
            }else{
                root = root->right; 
            }
        }
        
        return root; 
    }
};

/*
time compleixty: O(H)
space complexity: O(H)
*/ 