class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.begin() + nums.size());
        
        int n = nums.size()/2; 
        
        return nums[n]; 
    }
};

/*
time complexity: O(nlogn)
space complexity: O(1)
*/