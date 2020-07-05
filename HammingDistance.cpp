//Ian Hays
//07-04-2020
//https://leetcode.com/problems/hamming-distance/
//SC: O(1) TC: O(N)

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;

        while(x!=0 || y!=0){
            if(x&1 ^ y&1){
                count++;
            }
            x = x >> 1;
            y = y >> 1;    
        }
        
        return count;
    }
};
