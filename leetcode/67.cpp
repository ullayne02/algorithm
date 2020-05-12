class Solution {
public:
    string addBinary(string a, string b) {
        string sum = ""; 
        bool carry = 0; 
        int i = a.size() - 1; 
        int j = b.size() - 1; 
        
        while(i >= 0 && j >= 0){
            if(a[i] == '1' && b[j] == '1'){
                if(carry) {
                    sum = "1" + sum; 
                }
                else sum = "0" + sum; 
                carry=1; 
                 
            }else if(a[i] == '0' && b[j] == '0'){
                if(carry) sum = "1" + sum;
                else sum = "0" + sum;
                carry = 0; 
            }else{
                if(carry) {
                    sum = "0" + sum;
                    carry = 1; 
                }
                else sum = "1" + sum; 
            }
            
            i--; 
            j--;
        }
        
        while(i >= 0){
            if(carry){
                if(a[i] == '1'){
                    sum = "0" + sum;
                    carry=1;
                }else{
                    sum = "1" + sum;
                    carry=0; 
                }
            }else{
                sum = a[i] + sum; 
            }
            i--;
        }
        
        while(j >= 0){
            if(carry){
                if(b[j] == '1'){
                    sum = "0" + sum;
                    carry=1;
                }else{
                    sum = "1" + sum;
                    carry=0; 
                }
            }else{
                sum = b[j] + sum; 
            }
            j--;
        }
        
        if(carry) sum = '1' + sum; 
        
        return sum; 
    }
};

/*
n: size of first string
m: size of second string
time complexity: O(n + m) 
space complexitu: O(n + m)
*/