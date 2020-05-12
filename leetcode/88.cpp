class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>aux1; 
        int i = 0; 
        
        while(i < m){
            aux1.push_back(nums1[i]); 
            i++; 
        }
        
        i = 0; 
        
        int j = 0; 
        int k = 0; 
        
        while(i < m && j < n){
            if(aux1[i] < nums2[j]){
                nums1[k] = aux1[i];
                i++; 
            }else{
                nums1[k] = nums2[j];
                j++; 
            }
            k++; 
        }
        
        while(j < n){
            nums1[k] = nums2[j];
            k++;
            j++; 
        }
        
        while(i < m){
            nums1[k] = aux1[i];
            k++;
            i++; 
        }
        
    }
};


/*
n: first arrays size
m: second arrays size
time complexity: O(n + m) 
space complexitu: O(n + m)
*/