//Ian Hays
//09-10-2020
//https://leetcode.com/problems/bulls-and-cows/
//SC: O(N) TC: O(N)

class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> umap;
        int c1 = 0; 
        int c2 = 0;
        for(int i = 0; i < secret.size(); i++){
            if(secret[i] == guess[i]){
                c1++;   
            }
        }
        for(int i = 0; i < secret.size(); i++){
            umap[secret[i]]++;    
        }
        for(int i = 0; i < guess.size(); i++){
            if(umap[guess[i]]-- > 0) c2++;
        }
        return to_string(c1) + "A" + to_string(c2-c1) + "B";
    }
};
