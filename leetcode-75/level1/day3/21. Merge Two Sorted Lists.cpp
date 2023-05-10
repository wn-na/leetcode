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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr || list2 == nullptr) {
            if(list1 == nullptr) {
                return list2;
            }
            return list1;
        }
 
        ListNode * head;
        ListNode * node;
        ListNode * head1 = list1;
        ListNode * head2 = list2;

        if(head1->val <= head2->val) {
            head = head1;
            head1 = head1->next;
        } else {
            head = head2;
            head2 = head2->next;
        }

        node = head;

        while (head1 != nullptr || head2 != nullptr) {
            if (head1 == nullptr) {
                node->next = head2;
                head2 = head2->next;
            } else if(head2 == nullptr) {
                node->next = head1;
                head1 = head1->next;
            } else if(head1->val <= head2->val) {
                node->next = head1;
                head1 = head1->next;
            } else {
                node->next = head2;
                head2 = head2->next;
            } 
            node = node->next;
        }

        return head; 
    }
};
