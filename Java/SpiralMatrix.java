//Ian Hays
//08-26-2020
//https://leetcode.com/problems/spiral-matrix/
//SC: O(N^2) TC: O(N^2)

class Solution {
    public enum Direction {right, down, left, up};
    
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> res = new ArrayList<Integer>();
        if(matrix.length == 0) return res;
        
        int m = matrix.length;
        int n = matrix[0].length;
        
        int r = n-1;
        int d = m-1;
        int l = 0;
        int u = 0;
        
        Direction dir = Direction.right;
        
        while(l <= r && u <= d){
            switch(dir){
                case right:
                    for(int i = l; i <= r; i++){
                        res.add(matrix[u][i]);
                    }
                    u++;
                    dir = Direction.down;
                    break;
                case down:
                    for(int i = u; i <= d; i++){
                        res.add(matrix[i][r]);
                    }
                    r--;
                    dir = Direction.left;
                    break;
                case left:
                    for(int i = r; i >= l; i--){
                        res.add(matrix[d][i]);
                    }
                    d--;
                    dir = Direction.up;
                    break;
                case up:
                    for(int i = d; i >= u; i--){
                        res.add(matrix[i][l]);
                    }
                    l++;
                    dir = Direction.right;
                    break;
            }
        }
        
        
        return res;
    }
}
