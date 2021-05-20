/***********************************************************************************************
Problem      Kth Largest Element in a Stream
Developer    Ian Hays
Date         05/19/2021
URL          https://leetcode.com/problems/kth-largest-element-in-a-stream/
Space        O(K) 
Time         O(N)
Description  Use a priority queue to hold the 3 largest values at all time popping off the smallest
             value when the size of the queue exceeds k.
************************************************************************************************/

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> m_pq;
    int m_k;
        
    KthLargest(int k, vector<int>& nums) {
        m_k = k;
        for(auto num: nums){
            m_pq.push(num);
            if(m_pq.size() > k){
                m_pq.pop();
            }
        }
    }
    
    int add(int val) {
        m_pq.push(val);
        if(m_pq.size() > m_k){
            m_pq.pop();
        }
        return m_pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
