/***********************************************************************************************
Problem      Flip Game
Developer    Ian Hays
Date         09/08/2021
URL          https://leetcode.com/problems/flip-game/
Space        O(N) 
Time         O(N)
Description Traverse through currentState flipping consecutive '-' to '+' and pushing back the 
            result and then backtracking. 
************************************************************************************************/

class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState) {
        vector<string> res;
        for(int i = 1; i < size(currentState); i++){
            if(currentState[i-1] == '+' && currentState[i] == '+'){
                currentState[i-1] = currentState[i] = '-';
                res.push_back(currentState);
                currentState[i-1] = currentState[i] = '+';
            }
        }
        return res;
    }
};
