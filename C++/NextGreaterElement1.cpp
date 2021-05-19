/***********************************************************************************************
Problem      Next Greater Element I
Developer    Ian Hays
Date         05/18/2021
URL          https://leetcode.com/problems/next-greater-element-i/
Space        O(N) 
Time         O(N)
Description  iterate through nums1 to find the greater value in nums2 to the right through the use
             of a lambda function. Push back values if found, -1 if not. 
************************************************************************************************/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(auto num1: nums1){
            auto found = find_if(find(nums2.begin(),nums2.end(),num1), nums2.end(), [num1](const int& num2) {return num2 > num1;});
            res.push_back(found != nums2.end() ? *found : -1);
        }
        return res;
    }
};
