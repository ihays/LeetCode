/***********************************************************************************************
Problem      How Many Apples Can You Put into the Basket
Developer    Ian Hays
Date         07/16/2021
URL          https://leetcode.com/problems/uncommon-words-from-two-sentences/
Space        O(N) 
Time         O(N)
Description  We use a max heap to store the number of apples. If the weight exceeds 5000, we pop
             the maximum value from the heap. Return the size of the heap.
************************************************************************************************/

class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) {
        priority_queue<int> max_heap;
        int weight = 0;
        for(auto apple: arr){
            weight += apple;
            max_heap.push(apple);
            if(weight > 5000){
                weight -= max_heap.top();
                max_heap.pop();
            }
        }
        return max_heap.size();
    }
};

auto speed_up = []() {std::ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
