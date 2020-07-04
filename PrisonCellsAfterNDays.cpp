//Ian Hays
//07-03-2020
//https://leetcode.com/problems/prison-cells-after-n-days/
//SC: O(n) TC: O(N*n)
//Transform prison cells N times unless we see a snapshot repeat, then we mod N.

class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<int> snapshot;
        vector<int> tmp;
        int count = 0;
        while(N--){
            for(int i = 0; i < cells.size(); i++){
                int occupied = 0;
                if(i-1 >= 0){
                    occupied+=cells[i-1] == 1 ? 1 : -1;
                }
                if(i+1 < cells.size()){
                    occupied+=cells[i+1] == 1 ? 1 : -1;
                }
                if(abs(occupied) == 2){
                    tmp.push_back(1);
                } else {
                    tmp.push_back(0);
                }    
            }
            cells = tmp;
            tmp.clear();
            if(snapshot == cells){
                N%=count;  
            }
            if(!count) snapshot = cells;
            count++;
        }
        
        return cells;
        
    }
};
