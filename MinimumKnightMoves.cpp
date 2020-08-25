//Ian Hays
//08-24-2020
//https://leetcode.com/problems/minimum-knight-moves/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<pair<int,int>> directions = {{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{-2,1},{2,-1},{-2,-1}};

    int minKnightMoves(int x, int y) {
        unordered_map<int,unordered_map<int,int>> umap;
        queue<pair<int,int>> q;
        q.push(make_pair(0,0));
        int res = 0;
        x = abs(x);
        y = abs(y);
        while(!q.empty()){
            bool flag = false;
            int m = q.size();
            for(int i = 0; i < m; i++){
                pair<int,int> position = q.front();
                q.pop();
                int X = position.first;
                int Y = position.second;
                if (X < -2 || Y < -2) continue;
                if (X > x+2 || Y > y+2) continue;
                if(X == x && Y == y){
                    flag = true;
                    break;
                } 
                for(int j = 0; j < directions.size(); j++){
                    pair<int,int> tmp = make_pair(X + directions[j].first, Y + directions[j].second);
                    if(!umap[tmp.first][tmp.second]++) q.push(tmp);
                }
            }
            if(flag) break;
            res++;
        }
        return res;
    }
};
