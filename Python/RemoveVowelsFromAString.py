//Ian Hays
//09-13-2020
//https://leetcode.com/problems/remove-vowels-from-a-string/
//SC: O(N) TC: O(N)

class Solution:
    def removeVowels(self, S: str) -> str:
        vowels = "aeiou"
        res = ""
        for ch in S:
            if ch not in vowels:
                res += ch
        return res
