class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        long int i = 1; 
        while(i<=n){
            if(i == n) return true;
            i*=3; 
        } 
        return false; 
    }
};

/*
space: O(1)
time: O(log(n, 3))
*/