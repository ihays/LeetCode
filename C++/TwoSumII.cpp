//Ian Hays
//12-23-2020
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//SC: O(1) TC: O(N^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 0; i < numbers.size(); i++){
            if(i > 2 && numbers[i] == numbers[i-2]) continue;
            for(int j = 1; j < numbers.size(); j++){
                if(numbers[i] + numbers[j] == target && i != j) return {i+1, j+1};
            }
        }
        return {};
    }
};
