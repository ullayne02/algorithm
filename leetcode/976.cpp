class Solution {
public:
    bool isTriangle(int a, int b, int c){
        if(a <= b && b <= c && a+b > c) return true;
        return false; 
    }
    
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.begin()+A.size()); 
        
        int slide = 0; 
        int end = 2; 
        int max = 0; 
        int i = 0; 
        while(i < A.size()-1){
            if(i < A.size()-2){
                if(isTriangle(A[i], A[i+1], A[i+2])){
                    int curr = A[i]+ A[i+1]+ A[i+2];
                    if(max < curr) max = curr; 
                }
            }else{
                break; 
            }
            i++;
            
        }
        
        return max; 
    }
};