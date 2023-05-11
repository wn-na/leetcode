/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int i = 0;
        ListNode * node = head;
        while(node->next) {
            node = node->next;
            i++;
        }

        i = (i + 1) / 2;
        node = head;
        while(i--) {
            node = node->next;
        }
        return node;
    }
};
