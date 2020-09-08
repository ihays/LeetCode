//Ian Hays
//09-07-20
//https://leetcode.com/problems/shuffle-string/
//SC: O(N) TC: O(N)

class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        res = [''] * len(s)
        for char, i in zip(s,indices):
            res[i] = char
        return "".join(res)
        
