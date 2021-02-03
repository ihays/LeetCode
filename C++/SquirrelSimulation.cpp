//Ian Hays
//02-03-2021
//https://leetcode.com/problems/squirrel-simulation/
//SC: O(1) TC: O(N)

class Solution {
public:
    int minDistance(int height, int width, vector<int>& tree, vector<int>& squirrel, vector<vector<int>>& nuts) {
        int sum = 0;
        int minDistance = INT_MAX;
        for(int i = 0; i < nuts.size(); i++){
            int dist = distance(tree,nuts[i]);
            sum += distance(tree, nuts[i]);
            minDistance = min(minDistance,distance(squirrel, nuts[i]) - dist);
        }
        return 2 * sum + minDistance;
        
    }
    int distance(vector<int>& a, vector<int>& b){
        return abs(b[0] - a[0]) + abs(b[1] - a[1]);
    }
};
