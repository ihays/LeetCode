//Ian Hays
//01-04-2021
//https://leetcode.com/problems/longest-valid-parentheses/
//SC: O(N) TC: O(N)

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            } else {
                if(!st.empty() && s[st.top()] == '('){
                    st.pop();  
                } else {
                    st.push(i);
                }
            }
        }
        int r = s.size();
        int res = 0;
        while(!st.empty()){
            int l = st.top();
            st.pop();
            res = max(res, r-l-1);
            r = l;
        }
        return max(res, r);
    }
};

    
