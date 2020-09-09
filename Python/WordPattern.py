//Ian Hays
//09-08-2020
//https://leetcode.com/problems/word-pattern/
//SC: O(N) TC: O(N)

class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        w = str.split()
        p = pattern
        return len(set(zip(p,w))) == len(set(p)) == len(set(w)) and len(w) == len(p)
