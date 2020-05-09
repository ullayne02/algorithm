class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<bool, int>> aux; 
        
        for(int i = 0; i < s.size(); i++){
            char c = s[i]; 
            if(aux.find(c) == aux.end()) aux[c] = {false, i};
            else aux[c].first = true; 
        }
        
        int index = INT_MAX; 
        int has = false; 
        for(auto it: aux){
            if(!it.second.first) {
                if(index > it.second.second) {
                    index = it.second.second; 
                    has = true;
                }
            }
            
        }
        
        return  has ? index : -1; 
    }
};

/*
Time: O(m + n)
Space: O(m + n)
*/