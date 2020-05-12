class Solution {
public:
    
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> ord1, ord2; 
        vector<int> ans; 
        for(int i = 0; i < arr2.size(); i++){
            ord1[arr2[i]] = i; 
        }
        for(int i = 0; i < arr1.size(); i++){
            ord2[arr1[i]]++; 
        }
        
        for(auto i: arr2){
            while(ord2[i]--){
                ans.push_back(i);
            }
        }
        
        int j = 0; 
        for(auto i: arr1){
            if(ord1.find(i) == ord1.end()){
                j++; 
                ans.push_back(i); 
            }
        }
        
        sort(ans.begin()+(ans.size() -j), ans.end());
        
        return ans; 
       
        
    }
};

/* 
space complexity: O(N)
time complexity: O(N) + mlog(m) (m is the number of values that is not on the second array)

*/