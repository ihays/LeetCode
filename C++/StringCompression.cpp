/***********************************************************************************************
Problem      String Compression
Developer    Ian Hays
Date         10/27/21
URL          https://leetcode.com/problems/string-compression/
Space        O(1) 
Time         O(N)
Description  We track the frequency of each letter, and then rewrite the input array with the
             frequency and then resize and return
************************************************************************************************/

class Solution {
public:
    int compress(vector<char>& chars) {
        int frq = 0, index = 0;
        for(int i = 0; i < size(chars); i++){
            int frq = 1;
            while(i + 1 < size(chars) && chars[i] == chars[i+1]){
                frq++;
                i++;
            }
            chars[index++] = chars[i];
            if(frq > 1){
                string sfrq = to_string(frq);
                for(auto ch: sfrq){
                    chars[index++] = ch;
                }    
            }
        }
        chars.resize(index);
        return index;
    }
};
