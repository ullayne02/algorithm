class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0; 
        
        for(auto n: nums){
            res ^= n;
        }
        
        return res; 
    }
};

/*
time: O(n)
space: O(1)
*/