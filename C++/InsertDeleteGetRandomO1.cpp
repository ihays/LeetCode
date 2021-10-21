/***********************************************************************************************
Problem      Insert Delete Get Random O1
Developer    Ian Hays
Date         10/20/2021
URL          https://leetcode.com/problems/insert-delete-getrandom-o1/
Space        O(N) 
Time         O(N)
Description  Grabs random value in set by advancing. This will need to be updated to grab at O(1)
************************************************************************************************/



class RandomizedSet {
public:
    unordered_set<int> uset;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(uset.count(val)){
            return false;
        } else {
            uset.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(uset.count(val)){
            uset.erase(val);
            return true;
        } else {
            return false;
        }
    }
    
    int getRandom() {
        auto it = uset.cbegin();
        int random = rand() % uset.size();
        advance(it, random);
        return *it; 
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
