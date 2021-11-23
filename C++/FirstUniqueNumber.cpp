/***********************************************************************************************
Problem      First Unique Number
Developer    Ian Hays
Date         11/22/2021
URL          https://leetcode.com/problems/first-unique-number/
Space        O(N) 
Time         O(N)
Description  Store frequcency of numbers in a map while adding to the vector numbers. When displaying
             the first unique, we want to skip any numbers with frequency greater than or equal to 2
             and display the first number. 
************************************************************************************************/

class FirstUnique {
public:
    unordered_map<int,int> freq;
    int index = 0;
    vector<int> numbers;
    
    FirstUnique(vector<int>& nums) {
        for(auto num: nums) freq[num]++;
        numbers = nums;
    }
    
    int showFirstUnique() {
        while(index < size(numbers) && freq[numbers[index]] >= 2) index++;
        return index == size(numbers) ? -1 : numbers[index];
    }
    
    void add(int value) {
        numbers.push_back(value);
        freq[value]++;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
