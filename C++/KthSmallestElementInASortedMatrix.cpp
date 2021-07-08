/***********************************************************************************************
Problem      Kth Smallest Element In A Sorted Matrix
Developer    Ian Hays
Date         07/07/2021
URL          https://leetcode.com/problems/reduce-array-size-to-the-half/
Space        O(K)
Time         O(N^2)
Description  We push matrix values to a max heap and pop when larger than k. Return top value. 
***********************************************************************************************/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for(int i = 0; i < size(matrix); i++){
            for(int j = 0; j < size(matrix[0]); j++){
                pq.push(matrix[i][j]);
                if(pq.size() > k) pq.pop();
            }
        }
        return pq.top();
    }
};
