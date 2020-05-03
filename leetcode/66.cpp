vector<int> plusOne(vector<int>& digits) {
        int carry = 0; 
        int i = digits.size() - 1; 
        if(digits[i] == 9) {
            carry = 1; 
            digits[i] = 0; 
            if(i == 0){
                digits.push_back(0);
                digits[0] = 1;
                return digits;
            }
        }
        else digits[i]++; 
        
        i--; 
        while(i > 0 && carry == 1){
            if(digits[i] == 9){
                carry = 1; 
                digits[i] = 0; 
            }else{
                digits[i]++;
                carry = 0; 
                break;
            }
            i--; 
        }
        
        if(carry == 1){
            
            if(digits[0] == 9) {
                
                digits.push_back(0); 
                               
                digits[0] = 1; 
            }
            else digits[0]++; 
        } 
        return digits;
    }

/*
time complexity: O(n)
space complexity: O(1)
*/