//Ian Hays
//07-01-2020
//https://leetcode.com/problems/plus-one/
//SC: O(1) TC: O(N)

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int index = digits.size()-1;
        
        while(index >= 0 && digits[index] == 9){
            digits[index] = 0;
            index--;
        }
        
        if(index < 0){
            digits.insert(digits.begin(), 1);
        } else {
            digits[index]++;    
        }
        
        return digits;
    }
};

