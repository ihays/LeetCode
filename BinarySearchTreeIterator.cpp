//Ian Hays
//07-28-2020
//https://leetcode.com/problems/binary-search-tree-iterator/
//SC: O(N) TC: O(N)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
private:
    queue<int> m_queue;
public:
    BSTIterator(TreeNode* root) {
        helper(root);
    }
    
    /** @return the next smallest number */
    int next() {
        int val = m_queue.front();
        m_queue.pop();
        return val;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !m_queue.empty();
    }
    
    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        m_queue.push(root->val);
        helper(root->right);
        return;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
