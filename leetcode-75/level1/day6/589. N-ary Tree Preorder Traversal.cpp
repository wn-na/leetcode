/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> answer;
        if(root) {
            answer.push_back(root->val);
            if (root->children.size()) {
                for(Node* next: root->children) {
                    vector<int> temp = preorder(next);
                    for (int i : temp) {
                        answer.push_back(i);
                    }
                }
            }
            return answer;
        } else {
            return answer;
        }
    }
};
