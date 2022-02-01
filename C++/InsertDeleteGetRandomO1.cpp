/***********************************************************************************************
Problem      Insert Delete Get Random O1
Developer    Ian Hays
Date         2/1/2022
URL          https://leetcode.com/problems/insert-delete-getrandom-o1/
Space        O(N) 
Time         O(N)
Description  using a map to store locations of values and a vector to insert, delete, and retrieve
             in O(1).
************************************************************************************************/


class RandomizedSet {
public:
    unordered_map<int, int> umap;
    vector<int> v;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(!umap.count(val)){
            v.push_back(val);
            umap[val] = size(v)-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(umap.count(val)){
            int index = umap[val];
            umap[v.back()] = index;
            swap(v[index], v[size(v)-1]);
            umap.erase(val);
            v.pop_back();
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
