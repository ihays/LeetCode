//Ian Hays
//07-26-2020
//https://leetcode.com/problems/remove-invalid-parentheses/
//SC: O(V) TC: O(V)
//V is the number of parentheses combinations

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char ch : s) {
            if (ch != ')' && ch != '(') continue;
            if (ch == '(') stack.push('(');
            if (stack.empty()) return false;
            if (ch == ')') stack.pop();
        }
        return stack.empty();
    }

    vector<string> removeInvalidParentheses(string s) {
        unordered_map<string, int> visited;
        queue<string> q;
        q.push(s);
        while (!q.empty() && !isValid(s)) {
            q.pop();
            for (int i = 0; i < s.length(); i++) {
                char ch = s[i];
                if (ch != ')' && ch != '(') continue;
                string substr = s;
                substr = substr.substr(0, i) + substr.substr(i + 1);
                if (visited[substr]++ == 0) q.push(substr);
            }
            s = q.front();
        }
        vector<string> res;
        while (!q.empty()) {
            s = q.front();
            if (isValid(s)) res.push_back(s);
            q.pop();
        }

        return res;
    }
};
