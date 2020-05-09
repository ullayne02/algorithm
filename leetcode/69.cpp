class Solution {
public:
    int mySqrt(int x) {
        int sqrt = 0; 
        int begin= 1;
        int end = x; 
        long mid;
        
        if(x == 0) return 0;
        
        while(begin <=end){
            mid = begin + (end - begin)/2; 
            
            if(mid*mid == x) return mid; 
            if(mid*mid < x){
                if((mid-1)*(mid-1) < x && (mid+1)*(mid+1) > x) return mid; 
                else begin = mid+1;
            }else{
                end = mid-1;
            }
        }
        
        return x; 
    }
};

/*
space: O(1)
time: O(log(n))
*/