class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0; 
        int end = num/2;
        long mid; 
        
        if(num == 0) return false;
        
        if(num == 1) return true; 
        
        while(low <= end){
            mid = low + (end-low)/2; 
            
            if(mid*mid > num) end = mid - 1; 
            else if(mid*mid == num) return true; 
            else low = mid + 1; 
        }
        return false; 
        
    }
};

