/***********************************************************************************************
Problem      Array Of Doubled Pairs
Developer    Ian Hays
Date         08/11/2021
URL          https://leetcode.com/problems/array-of-doubled-pairs/
Space        O(N) 
Time         O(N*LOG(N))
Description  We sort the array from smallest to largest, and then record the frequency of each value
             in the array. We check if there exists a doubled pair, and then decrement the frequency.
             We check if a pair does not exist if there still exists a count > 0 and return false.
************************************************************************************************/

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(begin(arr),end(arr));
        unordered_map<int,int> frq;
        for(int num: arr) frq[num]++;
        for(int num: arr){
            if(frq[num] && frq[num*2]){
                frq[num]--;
                frq[num*2]--;
            }
        }
        for(auto [num,count]: frq) if(count) return false;
        return true;
    }
};

