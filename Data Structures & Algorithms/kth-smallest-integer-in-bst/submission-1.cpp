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

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> sol; 
        helper(root, sol); 

        return sol[k - 1];
    }
private:
    private:
    void helper(TreeNode* node, vector<int>& sol) {
        if(node == nullptr){
            return;
        }

        helper(node->left, sol);

        sol.push_back(node->val);

        helper(node->right, sol);
    }
};
    

