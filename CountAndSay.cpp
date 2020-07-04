//Ian Hays
//07-03-2020
//https://leetcode.com/problems/count-and-say/
//SC: O(N) TC: O(N^2)
//iterate through res and count duplicates. Append result to tmp and then set to res to repeat n times

class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for(int i = 1; i < n; i++){
            string tmp;
            for(int j = 0; j < res.length(); j++){
                char curr = res[j];
                int count = 1;
                while(j+1 < res.length() && res[j] == res[j+1]){
                    count++;
                    j++;
                }
                tmp += to_string(count) + curr; 
                
            }
            res = tmp;
        }
        return res;
    }
};
