//Ian Hays
//08-24-2020
//https://leetcode.com/problems/minimum-knight-moves/
//SC: O(N^2) TC: O(N^2)

class Solution {
    private final int[][] directions = new int[][] {{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{-2,1},{2,-1},{-2,-1}};
    
    public int minKnightMoves(int x, int y) {
        Set<String> visited = new HashSet<>();
        Queue<int[]> queue = new LinkedList<>();
        queue.add(new int[] {0,0});
        int res = 0;
        x = Math.abs(x);
        y = Math.abs(y);
        while(!queue.isEmpty()){
            boolean flag = false;
            int m = queue.size();
            for(int i = 0; i < m; i++){
                int[] position = queue.remove();
                int X = position[0];
                int Y = position[1];
                if (X < -2 || Y < -2) continue;
                if (X > x+2 || Y > y+2) continue;
                if(X == x && Y == y){
                    flag = true;
                    break;
                } 
                for(int j = 0; j < directions.length; j++){
                    int tmpX = X + directions[j][0];
                    int tmpY = Y + directions[j][1];
                    if(!visited.contains(tmpX + "," + tmpY)){
                        visited.add(tmpX + "," + tmpY);
                        queue.add(new int[] {tmpX,tmpY});
                    }
                    
                }
            }
            if(flag) break;
            res++;
        }
        return res;
    }
}
