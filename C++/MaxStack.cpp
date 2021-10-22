/***********************************************************************************************
Problem      Max Stack
Developer    Ian Hays
Date         10/22/2021
URL          https://leetcode.com/problems/max-stack/
Space        O(N) 
Time         O(1)
Description  We insert stack values into a list and store the addresses for each value in a map
             which allows us to have a O(1) access time. 
************************************************************************************************/

class MaxStack {
public:
    list<int> l;
    map<int, vector<list<int>::iterator>> mp;
    
    MaxStack() {
        
    }
    
    void push(int x) {
        l.insert(begin(l), x);
        mp[x].push_back(begin(l));
    }
    
    int pop() {
        int val = *begin(l);
        l.erase(begin(l));
        mp[val].pop_back();
        if(mp[val].empty()) mp.erase(val);
        return val;
    }
    
    int top() {
        return *begin(l);
    }
    
    int peekMax() {
        return rbegin(mp)->first;
    }
    
    int popMax() {
        int val = rbegin(mp)->first;
        auto it = mp[val].back();
        l.erase(it);
        mp[val].pop_back();
        if(mp[val].empty()) mp.erase(val);
        return val;
    }
};

/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack* obj = new MaxStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->peekMax();
 * int param_5 = obj->popMax();
 */
