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
    list<int> m_list;
    map<int, vector<list<int>::iterator>> m_map;
    
    MinStack() {
        
    }
    
    void push(int val) {
        m_list.insert(begin(m_list), val);
        m_map[val].push_back(begin(m_list));
    }
    
    void pop() {
        int val = *begin(m_list);
        m_list.erase(begin(m_list));
        m_map[val].pop_back();
        if(m_map[val].empty()) m_map.erase(val);
    }
    
    int top() {
        return *begin(m_list);
    }
    
    int getMin() {
        return begin(m_map)->first;
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
