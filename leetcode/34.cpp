class Solution {
public:
    int search(vector<int>& nums, int target, bool first){
        int r = -1; 
        int begin = 0; 
        int end = nums.size()-1; 
        int mid = 0; 
        
        while(begin<=end){
            mid = begin + (end-begin)/2; 
            if(nums[mid] == target){
                if(first){
                    if(mid > 0){
                        if(nums[mid-1] < target) r = mid; 
                    }else{
                        r = mid; 
                    }
                    end = mid - 1; 
                }else{
                    if(mid < nums.size()-1){
                        if(nums[mid+1] > target) r = mid; 
                    }else{
                        r = mid; 
                    }
                    begin = mid + 1; 
                }
                
                if(r != -1) break; 
            
            }else{
                int curr = nums[mid];
                if(curr < target) {
                    begin = mid + 1; 
                }else end = mid - 1; 
            }
        
        }
        
        return r; 
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return vector<int> {search(nums, target, 1), search(nums, target, 0)}; 
    
    }
};