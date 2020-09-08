//Ian Hays
//09-08-2020
//https://leetcode.com/problems/word-pattern/
//SC: O(N) TC: O(N)

class Solution {
    public boolean wordPattern(String pattern, String str) {
        String[] words = str.split(" ");
        Map<Object,Integer> map = new HashMap<Object,Integer>();
        if(words.length != pattern.length()) return false;
        
        for(Integer i = 0; i < words.length; i++){
            if(map.put(pattern.charAt(i),i) != map.put(words[i],i)){
                return false;
            }
        }
        
        return true;
    }
}

