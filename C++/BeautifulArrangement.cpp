//Ian Hays
//01-03-21
//https://leetcode.com/problems/beautiful-arrangement/
//SC: O(N) TC: O(N!)

class Solution {
public:
    int countArrangement(int n) {
        vector<int> tmp(n+1,0);
        return dfs(tmp, 1);
    }
    
    int dfs(vector<int>& tmp, int index){
        if(tmp.size() == index) return 1;
        
        int count = 0;
    
        for(int i = 1; i < tmp.size(); i++){
            if(tmp[i] == 0 && (i%index == 0 || index%i == 0)){
                tmp[i] = 1;
                count += dfs(tmp,index+1);
                tmp[i] = 0;
            }
        }
        return count;
    }
};
