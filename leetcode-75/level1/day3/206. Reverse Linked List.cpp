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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* tail = head;
        ListNode* node = head->next;
        ListNode* temp;
        tail->next = nullptr;
        while (node != nullptr) {
            temp = tail;
            tail = node;
            node = node->next;
            tail->next = temp;
        }

        return tail;
    }
};
