class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> num; 
        
        for(int x: nums){
            if(num.find(x) != num.end()) return true;
            else num.insert(x); 
        }
        
        return false; 
    }
};

/*
time complexity: O(n)
space complexity: O(n)
*/