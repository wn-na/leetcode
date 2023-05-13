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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        queue<TreeNode *> nodeQueue;
        if (root) {
            nodeQueue.push(root);
            while (nodeQueue.size() > 0) {
                int size = nodeQueue.size();
                vector<int> value;
                for (int i = 0; i < size; i++) {
                    TreeNode* node = nodeQueue.front(); 
                    nodeQueue.pop();
                    if (node) {
                        value.push_back(node->val);
                        if (node->left) {
                            nodeQueue.push(node->left);
                        }
                        if (node->right) {
                            nodeQueue.push(node->right);
                        }
                    }
                }
                answer.push_back(value);
            }
        }
        return answer;
    }
};
