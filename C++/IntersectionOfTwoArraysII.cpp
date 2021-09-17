/***********************************************************************************************
Problem      Reverse Prefix Of Word
Developer    Ian Hays
Date         09/17/2021
URL          https://leetcode.com/problems/reverse-prefix-of-word/
Space        O(N) 
Time         O(N)
Description  Grab the frequency of nums1 and insert into a result array of nums2 up to frequency
             established in nums1.
************************************************************************************************/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        vector<int> res;
        for(int num: nums1) freq[num]++;
        for(int num: nums2) if(freq[num]-- > 0) res.push_back(num);
        return res;
    }
};
