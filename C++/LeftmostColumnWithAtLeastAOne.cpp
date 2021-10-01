/***********************************************************************************************
Problem      Leftmost Column with at Least a One
Developer    Ian Hays
Date         10/01/2021
URL          https://leetcode.com/problems/leftmost-column-with-at-least-a-one/
Space        O(M+N)
Time         O(M+N)
Description  For each row, we move column pointer to the left for each 1 we see in binary matrix.
             We return the left most column.
************************************************************************************************/

/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int x = binaryMatrix.dimensions()[0], y = binaryMatrix.dimensions()[1];
        bool found = false;
        for(int i = 0; i < x; i++){
            while(y-1 >= 0 && binaryMatrix.get(i, y-1)){
                found = true;
                y--;
            }
        }
        return found ? y : -1;
    }
};
