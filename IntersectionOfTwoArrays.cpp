//Ian Hays
//07-24-2020
//https://leetcode.com/problems/intersection-of-two-arrays/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        for(int num: nums1) umap[num]++;
        nums1.clear();
        for(int num: nums2){
            if(umap[num]){
                umap.erase(num);
                nums1.push_back(num);
            }
        }    
        return nums1;
    }
};
