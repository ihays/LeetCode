/***********************************************************************************************
Problem      Daily Temperatures
Developer    Ian Hays
Date         11/12/21
URL          https://leetcode.com/problems/daily-temperatures/
Space        O(N) 
Time         O(N)
Description  Push into the stack indexes from right to left of temperature vector. For each index
             right to left starting from with the penultimate element, we pop from the stack any
             temperatures smaller than current index. If the stack isn't empty, we record the distance
             away the greater temperature into a result vector and then push into the stack the
             current index and repeat. 
************************************************************************************************/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = size(temperatures);
        vector<int> res(n);
        stack<int> s;
        s.push(n-1);
        
        for(int i = n - 2; i >= 0; i--){
            int temp = temperatures[i];
            while(!s.empty() && temperatures[s.top()] <= temperatures[i]) s.pop();
            if(!s.empty()) res[i] = s.top() - i;
            s.push(i);
        }
        return res;
    }
};
