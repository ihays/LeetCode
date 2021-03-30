/***********************************************************************************************
Problem      Russian Doll Envelopes
Developer    Ian Hays
Date         03/30/2021
URL          https://leetcode.com/problems/russian-doll-envelopes/
Space        O(N) 
Time         O(1)
Description  Sort envelopes by width smallest to largest, if width equal, sort by height largest to
             smallest. We then determine the longest increasing subsequence based on height. We do 
             this by iterating through the heights and add to the subsequence if there doesn't exist 
             a lower bound value (value is larger than all values in subsequence). If there is a lower 
             lound value and the and the lower bound value is not equal to the height, we swap values. 
************************************************************************************************/

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), [](vector<int> a, vector<int> b){
           return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]); 
        });
        
        vector<int> res;
        
        for(auto envelope: envelopes){
            auto iter = lower_bound(res.begin(), res.end(), envelope[1]);
            if(iter == res.end()) res.push_back(envelope[1]);    
            else if(*iter > envelope[1]) *iter = envelope[1];    
        }
        
        return res.size();
    }
};


