/***********************************************************************************************
Problem      Maximum Frequency Stack
Difficulty   Hard
Developer    Ian Hays
Date         02/28/2021
URL          https://leetcode.com/problems/maximum-frequency-stack/
Space        O(N) 
Time         O(N*LOG(N))
Description  Stack where popping based on frequency of value. If Two values have the same frequency
             we pop the most recent. Using a priority queue to prioritize based on quantity (umap)
             and order. Compare class holds an operator that determines the order of the priority
             queue. 
************************************************************************************************/

class Compare {
public:
    bool operator() (array<int,3>& arr1, array<int,3>& arr2) {
        return arr1[1] == arr2[1] ?  arr1[0] < arr2[0] : arr1[1] < arr2[1];
    }
};

class FreqStack {
public:
    priority_queue<array<int,3>, vector<array<int,3>>, Compare> pq;
    unordered_map<int,int> umap;
    int order = 0;
    
    FreqStack() {
        
    }
    
    void push(int x) {
        pq.push({++order,++umap[x],x});
    }
    
    int pop() {
        array<int,3> arr = pq.top();
        pq.pop();
        umap[arr[2]]--;
        return arr[2];
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */



