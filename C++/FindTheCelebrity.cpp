//Ian Hays
//02-26-2021
//https://leetcode.com/problems/find-the-celebrity/
//SC: O(N) TC: O(1)

/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        int person = 0;
        for(int i = 1; i < n; i++){
            if(knows(person,i)) person = i;
        }
                
        for(int i = 0; i < n; i++){
            if(person == i) continue;
            if(!knows(i,person) || knows(person,i)) return -1;
        }
        return person;
    }
};
