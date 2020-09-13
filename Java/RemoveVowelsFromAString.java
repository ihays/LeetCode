//Ian Hays
//09-13-2020
//https://leetcode.com/problems/remove-vowels-from-a-string/
//SC: O(N) TC: O(N)

class Solution {
    public String removeVowels(String S) {
        StringBuilder sb = new StringBuilder();
        String vowels = "aeiou";
        for(char ch : S.toCharArray()){
            if(vowels.indexOf(ch) == -1) sb.append(ch);
        }
        return sb.toString();
    }
}
