//Ian Hays
//01-13-2021
//https://leetcode.com/problems/boats-to-save-people/
//SC: O(1) TC: O(LOG(N))

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l = 0;
        int r = people.size()-1;
        int res = 0;
        sort(people.begin(), people.end());
        while(l <= r){
            if(people[l] + people[r] <= limit){
                res++;
                l++;
                r--;
            } else {
                res++;
                r--;
            }
        }
        return res;
    }
};
