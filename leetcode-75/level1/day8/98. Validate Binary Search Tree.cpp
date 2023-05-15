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
    bool isValidBST(TreeNode* root) {
        queue<pair<TreeNode*, pair<long, long>>> queue;
        queue.push({ root, { -2147483648 - 1L, 2147483647 + 1L} });

        while (queue.size() > 0) {
            int size = queue.size();
            for (int i = 0; i < size; i++) {
                pair<TreeNode*, pair<long, long>> p = queue.front();
                TreeNode* node = p.first;
                pair<long, long> range = p.second;
                queue.pop();
                if (node->left) {
                    if (node->left->val < node->val && range.first < node->left->val && node->left->val < range.second) {
                        queue.push({ node->left, { range.first, node->val } });
                    } else {
                        return false;
                    }
                }
                if (node->right) {
                    if (node->right->val > node->val && range.first < node->right->val && node->right->val < range.second) {
                        queue.push({ node->right, { node->val, range.second } });
                    } else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
