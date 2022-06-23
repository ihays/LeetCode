/***********************************************************************************************
Problem      Merge Sorted Array
Developer    Ian Hays
Date         06/20/2022
URL          https://leetcode.com/problems/merge-sorted-array/
Space        O(1) 
Time         O(N)
Description  fill in elements from the end of nums1 based on the larger value between locations
             m and n in both nums1/nums2. 
************************************************************************************************/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, t = m+n-1;
        while(j >= 0){
            nums1[t--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        }
        
    }
};
