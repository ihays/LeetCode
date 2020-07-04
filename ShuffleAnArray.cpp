//Ian Hays
//07-04-2020
//https://leetcode.com/problems/shuffle-an-array/
//SC: O(N) TC: O(N)
//Design: set member variable to nums. Reset returns member variable set when class constructed. 
//Shuffle swaps each value of member variable in a temporary variable to return

class Solution {
private:
    vector<int> m_nums;
public:
    Solution(vector<int>& nums) {
        m_nums = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return m_nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> tmp(m_nums);
        for(int i = 0; i < tmp.size(); i++){
            swap(tmp[i], tmp[rand()%tmp.size()]);
        }
        return tmp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
