//Ian Hays
//02-06-2021
//https://leetcode.com/problems/simplify-path/
//SC: O(N) TC: O(N)

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        for(int i = 1; i < path.size(); i++){
            string tmp;
            while(i < path.size() && path[i] != '/'){
                tmp += path[i];
                i++;
            }
            if(tmp == ".."){
                if(!s.empty()) s.pop();
            } else {
                if(tmp != "." && tmp != "") s.push(tmp);
            }
        }
        
        string res;
        while(!s.empty()){
            string tmp = "/";
            tmp += s.top();
            s.pop();   
            res = tmp + res;
        }
        
        return res.empty() ? "/" : res;
    }
};





