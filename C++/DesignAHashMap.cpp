/***********************************************************************************************
Problem      Design HashMap
Developer    Ian Hays
Date         03/07/2021
URL          https://leetcode.com/problems/design-hashmap/
Space        O(N) 
Time         O(N)
Description  Hash Map built using a vector of list of key value pairs. Lists are buckets, and size
             of vector 10000 is the hash key. 
************************************************************************************************/

class MyHashMap {
public:
    vector<list<array<int,2>>> m_hash;
    
    /** Initialize your data structure here. */
    MyHashMap() {
        m_hash.resize(10000);
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        auto &list = m_hash[key%10000];
        for (auto &[k, val]: list){
            if(k == key){
                val = value;
                return;
            }
        }
        list.push_back({key,value});
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        auto &list = m_hash[key%10000];
        for (auto &[k, val]: list){
            if(k == key) return val;
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        auto &list = m_hash[key%10000];
        list.remove_if([key](array<int,2> arr){return arr[0] == key;});
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
