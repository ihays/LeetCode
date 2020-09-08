//Ian Hays
//09-07-20
//https://leetcode.com/problems/shuffle-string/
//SC: O(N) TC: O(N)

class Solution {
    public String restoreString(String s, int[] indices) {
        char[] res = new char[indices.length];
        for(int i = 0; i < indices.length; i++){
            res[indices[i]] = s.charAt(i);
        }
        return new String(res);
    }
}
