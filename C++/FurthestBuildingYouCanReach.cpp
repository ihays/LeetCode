/***********************************************************************************************
Problem      Furthest Building You Can Reach
Developer    Ian Hays
Date         04/26/2021
URL          https://leetcode.com/problems/furthest-building-you-can-reach/
Space        O(N) 
Time         O(N)
Description  Use a priority queue to keep track of heights requiring a ladder or bricks by smallest. 
             If the queue is greater than the number of ladders we have, we must use bricks. Using 
             bricks from the priority queue ensures that we use the least amount to get to the 
             furthest building.
************************************************************************************************/

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        for(int i = 0; i < heights.size()-1; i++){
            int height = heights[i+1] - heights[i];
            if(height > 0){
                pq.push(-height);
            }
            if(pq.size() > ladders){
                bricks += pq.top();
                pq.pop();
            }
            if(bricks < 0) return i;
        }
        return heights.size() - 1;
    }    
};
