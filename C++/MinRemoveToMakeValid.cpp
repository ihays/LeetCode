//Ian Hays
//02-19-2021
//https://leetcode.com/problems/4sum-ii/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res;
        stack<int> stack;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                stack.push(res.size());
                res.push_back(s[i]);
            } else if(s[i] == ')') {
                if(!stack.empty()){
                    stack.pop();    
                    res.push_back(s[i]);
                }
            } else {
                res.push_back(s[i]);
            }
        }
        for(int i = res.length()-1; i >= 0; i--){
            if(!stack.empty() && stack.top() == i){
                res.erase(i,1);
                stack.pop();
            } 
        }
        
        return res;
    }
};
