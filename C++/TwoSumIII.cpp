/***********************************************************************************************
Problem      Two Sum III
Developer    Ian Hays
Date         07/28/2021
URL          https://leetcode.com/problems/two-sum-iii-data-structure-design/
Space        O(1) 
Time         O(N)
Description  Store two sum values in map with counts. We use the difference to determine if there
             exists a number that sums to value.
************************************************************************************************/

class TwoSum {
public:
    unordered_map<int,int> numbers;
    /** Initialize your data structure here. */
    TwoSum() {}
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
        numbers[number]++;
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        for(auto [number,count]: numbers){
            long k = (long)value - number;
            if((number == k && count > 1) || (number != k && numbers.count(k))) return true;
        }
        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */ 
