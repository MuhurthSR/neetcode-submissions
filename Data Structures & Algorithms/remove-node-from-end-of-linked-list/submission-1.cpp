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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy = (0);
        dummy.next = head;

        ListNode* left = &dummy;
        ListNode* right = &dummy;

        for(int i = 0;i < n;i++){
            right = right->next;
        }
        while(right->next != nullptr){
            right = right->next;
            left = left->next;
        }
        ListNode* target = left->next;
        left->next = target->next;
        delete target;
        return dummy.next;
    }
};
