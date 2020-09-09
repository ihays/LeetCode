//Ian Hays
//07-23-2020
//https://leetcode.com/problems/clone-graph/
//SC: O(N*M) TC: O(N+M)

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return node;
        unordered_map<Node*,Node*> umap;
        queue<Node*> q;
        q.push(node);
        umap[node] = new Node(node->val);
        
        while(!q.empty()){
            int m = q.size();
            for(int i = 0; i < m; i++){
                Node* tmp = q.front();
                q.pop();
                for(auto it: tmp->neighbors){
                    if(umap[it] == 0){
                        q.push(it);
                        umap[it] = new Node(it->val);
                    }
                    umap[tmp]->neighbors.push_back(umap[it]);
                }
            }
        }
        
        return umap[node];
    }
};
