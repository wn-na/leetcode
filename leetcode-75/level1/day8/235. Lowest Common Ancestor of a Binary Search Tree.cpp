/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        queue<pair<TreeNode*, pair<int, int>>> treeQueue;

        TreeNode* temp = p;
        if(p->val > q->val) {
            p = q;
            q = temp;
        }

        treeQueue.push({ root, { -1000000000 - 1, 1000000000 + 1 }});
        while (treeQueue.size() > 0) {
            TreeNode* node = treeQueue.front().first;
            pair<int, int> range = treeQueue.front().second;
            treeQueue.pop();
            if (range.first <= p->val && p->val <= node->val && node->val <= q->val && q->val <= range.second) {
                return node;
            } else {
                if (range.first < p->val && p->val < node->val && range.first < q->val && q->val < node->val) {
                    if(node->left)
                    treeQueue.push({ node->left, { range.first, node->val }});
                } else {
                    if(node->right)
                    treeQueue.push({ node->right, { node->val, range.second }});
                }
            }
        }
        return root;
    }
};
