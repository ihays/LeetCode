//Ian Hays
//12-23-20
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//SC: O(1) TC: O(N^2)

public class Solution {
    public int[] TwoSum(int[] numbers, int target) {
        for(int i = 0; i < numbers.Length; i++){
            if(i > 2 && numbers[i] == numbers[i-2]) continue;
            for(int j = 1; j < numbers.Length; j++){
                if(numbers[i] + numbers[j] == target && i != j) return new int[]{i+1, j+1};
            }
        }
        return new int[]{};
    }
}
