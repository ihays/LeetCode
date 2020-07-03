//Ian Hays
//07-02-2020
//https://leetcode.com/problems/merge-sorted-array/
//SC: O(1) TC: O(N*LOG(N))
//Binary search to insert values from nums2 into nums1

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        for(int i = 0; i < nums2.size(); i++){
            nums1.insert(nums1.begin()+binarySearch(nums1, 0, m-1, nums2[i]),nums2[i]);
            m++;
        }
    }
    
    int binarySearch(vector<int> nums1, int l, int r, int x) { 
        int mid =  l + (r - l) / 2;
        if (l <= r) { 
            mid = l + (r - l) / 2; 
            if (nums1[mid] == x) 
                return mid; 

            if (nums1[mid] > x){
                return binarySearch(nums1, l, mid - 1, x); 
            } else {
                return binarySearch(nums1, mid + 1, r, x); 
            } 
        } 
        return mid; 
    } 
};
