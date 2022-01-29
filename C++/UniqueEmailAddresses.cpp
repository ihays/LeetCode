/***********************************************************************************************
Problem      Unique Email Addresses
Developer    Ian Hays
Date         1/28/2022
URL          https://leetcode.com/problems/unique-email-addresses/
Space        O(N^2) 
Time         O(N^2)
Description  remove . and stop at + for each local name, and append the domain name adding to a set
             we return the unique number of values in the set. 
************************************************************************************************/

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> res;
        for(auto email: emails){
            string e;
            for(auto ch: email){
                if(ch == '+' || ch == '@') break;
                if(ch == '.') continue;
                e.push_back(ch);
            }
            e += email.substr(email.find('@'));
            res.insert(e);
        }
        return size(res);
    }
};
