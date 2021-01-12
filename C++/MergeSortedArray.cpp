//Ian Hays
//01-11-2021
//https://leetcode.com/problems/merge-sorted-array/
//SC: O(1) TC: O(N*LOG(N))
//Binary search to insert values from nums2 into nums1
//updated on 01-11-2021 to resize first and then insert to reduce space/time. 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        for(auto it: nums2){
            nums1.insert(nums1.begin() + binarySearch(nums1, it), it);
        }
    }
    
    int binarySearch(vector<int>& nums1, int target){
        int left = 0;
        int right = nums1.size();
        
        while(left < right){
            int mid = (left+right)/2;
            if(target <= nums1[mid]){
                right = mid;
            } else {
                left = mid+1;
            }   
        }
        return left;
    }
};
