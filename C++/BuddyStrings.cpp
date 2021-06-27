/***********************************************************************************************
Problem      Buddy Strings
Developer    Ian Hays
Date         06/26/2021
URL          https://leetcode.com/problems/buddy-strings/
Space        O(1)
Time         O(N)
Description  If the words are equal, we return true if there are duplicates in s since 
swapping duplicates yields the same word, otherwise we return false. If the words are
not equal, we search for the two indexes where they are different. After swapping on
the indexes, we return true if both strings are equal, otherwise false. 
************************************************************************************************/

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(size(s) != size(goal)) return false;
        if(s == goal) return set<char>(begin(s), end(s)).size() < size(goal) ? true : false;
        int index[2] = {-1};
        for(int i = 0; i < size(s); i++){
            if(s[i] != goal[i]){
                if(index[0] == -1){
                    index[0] = i;
                } else {
                    index[1] = i;
                }
            }
        }
        swap(s[index[0]],s[index[1]]);
        return s == goal;
    }
};
