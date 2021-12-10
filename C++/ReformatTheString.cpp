/***********************************************************************************************
Problem      Reformat The String
Developer    Ian Hays
Date         12/09/2021
URL          https://leetcode.com/problems/reformat-the-string/
Space        O(N)
Time         O(N)
Description  We sort the characters and numbers into two different strings. If the quantities of 
             each differ by more than one, we return empty string. We zipper push back values to
             the result and return. 
************************************************************************************************/


class Solution {
public:
    string reformat(string s) {
        string chars, nums;
        for(auto ch: s){
            if(ch >= '0' && ch <= '9') nums.push_back(ch);
            else chars.push_back(ch);
        }
        int size1 = size(nums), size2 = size(chars);
        if(abs(size1 - size2) > 1) return "";
        string res;
        if(size1 > size2){
            for(int i = 0; i < size1; i++){
                if(i < size(nums)) res.push_back(nums[i]);
                if(i < size(chars)) res.push_back(chars[i]);
            }    
        } else {
            for(int i = 0; i < size2; i++){
                if(i < size(chars)) res.push_back(chars[i]);
                if(i < size(nums)) res.push_back(nums[i]);
            }
        }
        return res;
    }
};
