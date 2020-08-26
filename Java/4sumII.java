//Ian Hays
//08-26-2020
//https://leetcode.com/problems/4sum-ii/
//SC: O(N^2) TC: O(N^2)

class Solution {
    public int fourSumCount(int[] A, int[] B, int[] C, int[] D) {
        int result = 0;
        HashMap<Integer,Integer> hmap = new HashMap<Integer,Integer>();
        
        for(int i = 0; i < A.length; i++){
            for(int j = 0; j < B.length; j++){
                int sum = A[i] + B[j];
                hmap.put(sum, hmap.getOrDefault(sum,0) + 1);
            }
        }
        
        for(int i = 0; i < C.length; i++){
            for(int j = 0; j < D.length; j++){
                int sum = C[i] + D[j];
                if(hmap.containsKey(-sum)) result += hmap.get(-sum);
            }
        }
        
        return result;
        
    }
}
