class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false; 
        
        unordered_map<char, int> freq; 
        unordered_map<char, int> freq1; 
        
        for(char c:s){
            if(freq.find(c) == freq.end()){
                freq[c] = 1;
            }else{
                freq[c]++; 
            }
        }
        
        for(char c: t){
            if(freq1.find(c) == freq1.end()){
                freq1[c] = 1;
            }else{
                freq1[c]++; 
            }
        }
        
        for (auto a: t){
            if(freq.find(a) == freq.end()) return false; 
            if(freq[a] != freq1[a]) return false; 
            cout << freq[a] << " " << freq1[a] << endl;
        }
        
        return true; 
        
    }
};

/*
time: O(n)
space: O(n)
*/