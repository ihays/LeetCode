/***********************************************************************************************
Problem      Path Crossing
Developer    Ian Hays
Date         08/18/2021
URL          https://leetcode.com/problems/path-crossing/
Space        O(N) 
Time         O(N)
Description  keep track of coordinates in a set. If we encounter a duplicate return true, otherwise
             false. 
************************************************************************************************/

class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> uset;
        uset.insert("00");
        int vertical{},horizontal{};
        for(auto ch: path){
            if(ch == 'E') horizontal++;
            else if (ch == 'W') horizontal--;
            else if (ch == 'N') vertical++;
            else if (ch == 'S') vertical--;
            string coordinate = to_string(horizontal) + to_string(vertical);
            if(uset.count(coordinate)) return true;
            uset.insert(coordinate);
        }
        return false;
    }
};
