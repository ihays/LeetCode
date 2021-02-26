/***********************************************************************************************
Problem      Find The Celebrity
Developer    Ian Hays
Date         02/26/2021
URL          https://leetcode.com/problems/find-the-celebrity/
Space        O(N) 
Time         O(1)
Description  Dfs through each person based on who they know. The celebrity candidate should always 
             be the end point since they do not know anyone. We then verify the celebrity to make
             sure everyone knows them, and they know no one.             
************************************************************************************************/

/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        int person = 0;
        //dfs through each person based on who they know
        for(int i = 1; i < n; i++){
            if(knows(person,i)) person = i;
        }
        //verify person is the celebrity
        for(int i = 0; i < n; i++){
            if(person == i) continue;
            if(!knows(i,person) || knows(person,i)) return -1;
        }
        return person;
    }
};
