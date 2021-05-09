/***********************************************************************************************
Problem      Construct Target Array With Multiple Sums
Developer    Ian Hays
Date         05/09/2021
URL          https://leetcode.com/problems/construct-target-array-with-multiple-sums/
Space        O(N) 
Time         O(N)
Description  Sum entire and create a priority queue of vector. We determine the value that was added
             to the largest number in vector and mod it. We continue to do this until a sum is less
             than or equal to 1 in which we return. If the largest value is greater than half the sum
             we break and compare the sum to the target size to check if all values are equal to 1 to
             return true or false.
************************************************************************************************/

class Solution {
public:
    bool isPossible(vector<int>& target) {
        long long sum = accumulate(target.begin(), target.end(), (long long)0);
        priority_queue<int> pq (target.begin(), target.end());
        while(sum > 1 && pq.top() > sum / 2){
            long long curr = pq.top();
            pq.pop();
            sum -= curr;
            if(sum <= 1) return sum;
            pq.push(curr % sum);
            sum += curr % sum;
            
        }
        return target.size() == sum;
    }
};
