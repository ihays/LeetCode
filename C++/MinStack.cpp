/***********************************************************************************************
Problem      Min Stack
Developer    Ian Hays
Date         10/24/2021
URL          https://leetcode.com/problems/min-stack/
Space        O(N) 
Time         O(1)
Description  We insert stack values into a list and store the addresses for each value in a map
             which allows us to have a O(1) access time. 
************************************************************************************************/

class MinStack {
public:
    list<int> l;
    map<int, vector<list<int>::iterator>> mp;
    
    MinStack() {
        
    }
    
    void push(int x) {
        l.insert(begin(l), x);
        mp[x].push_back(begin(l));
    }
    
    void pop() {
        int val = *begin(l);
        l.erase(begin(l));
        mp[val].pop_back();
        if(mp[val].empty()) mp.erase(val);
    }
    
    int top() {
        return *begin(l);
    }
    
    int getMin() {
        return begin(mp)->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
