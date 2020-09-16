//Ian Hays
//09-16-2020
//https://leetcode.com/problems/longest-consecutive-sequence/
//SC: O(N) TC: O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        priority_queue<int> pq;
        for(int num : nums){
            pq.push(num);
        }
        int count = 1, count_max = 1;
        int prev = pq.top();
        pq.pop();

        while(!pq.empty()){
            int curr = pq.top();
            if(curr + 1 == prev){
                count++;
                count_max = max(count_max,count);
            } else if(curr == prev) {
                pq.pop();
                continue;
            } else {
                count = 1;
            }
            prev = curr;
            pq.pop();
        }
        return count_max;
    }
};
