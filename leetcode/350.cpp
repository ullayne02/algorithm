class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection; 
        
        if(nums1.size() == 0 || nums2.size() == 0) return intersection; 
        
        unordered_map<int, int> map1; 
        unordered_map<int, int> map2; 
        
        for(int i: nums1){
            if(map1.find(i) != map1.end()) map1[i]++;
            else map1[i] = 1; 
        }
        
        for(int i: nums2){
            if(map2.find(i) != map2.end()) map2[i]++;
            else map2[i] = 1; 
        }
        
        for(auto v: map1){
            if(map2.find(v.first) != map2.end()){
                int j = 0; 
                while(j < min(v.second, map2[v.first])){
                    intersection.push_back(v.first); 
                    j++; 
                }
            }
        }
        
        return intersection; 
    }
};

/*time and space complexity O(N)*/