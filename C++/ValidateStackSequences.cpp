//Ian Hays
//02-26-2021
//https://leetcode.com/problems/validate-stack-sequences/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int j = 0;
        for(int i = 0; i < pushed.size(); i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[j]){
                s.pop();
                j++;
            }
            
        }
        return s.empty();
    }
};
