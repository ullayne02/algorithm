class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        stack<vector<int>> partial; 
        queue<pair<TreeNode*, int>> queue; 
        vector<vector<int>> result; 
        TreeNode* aux; 
        
        if(!root) return result; 
        
        vector<int> curr_level_vec;
        int curr_level = 0; 
        queue.push({root, curr_level}); 
        
        while(!queue.empty()){
            pair<TreeNode*, int> curr = queue.front(); 
            queue.pop();
            
            aux = curr.first; 
            if(curr.second == curr_level) curr_level_vec.push_back(aux->val);
            else{
                partial.push(curr_level_vec);
                curr_level_vec.clear();
                curr_level_vec.push_back(aux->val);
                curr_level++; 
            }
            
            if(aux->left){
                queue.push({aux->left, curr_level + 1});
            }if(aux->right){
                queue.push({aux->right, curr_level+1});
            }
        }
        partial.push(curr_level_vec);
        
        while(!partial.empty()){
            result.push_back(partial.top());
            partial.pop();
        }
        
        return result;
    }
};
/*
time complexity: 
BFS: O(E + V)
Build result: O(V)

space complexity: 3.O(V)
*/