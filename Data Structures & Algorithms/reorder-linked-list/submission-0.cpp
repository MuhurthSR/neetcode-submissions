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
    void reorderList(ListNode* head) {
        ListNode* end = head;
        ListNode* mid = head;
        while(end != nullptr && end->next != nullptr){
            end = end->next->next;
            mid = mid->next;
        }

        ListNode* second = mid->next;
        mid->next = nullptr;
        ListNode* curr = second;
        ListNode* scout = second;
        ListNode* prev = nullptr;
        while(curr != nullptr){
            scout = curr->next;
            curr->next = prev;
            prev = curr;
            curr = scout;
        }
        ListNode* scurr = prev;
        ListNode* fcurr = head;
        ListNode* fscout = head;
        ListNode* sscout = second;

        while(scurr != nullptr && fcurr != nullptr){
            fscout = fcurr->next;
            sscout = scurr->next;
            fcurr->next = scurr;
            scurr->next = fscout;
            fcurr = fscout;
            scurr = sscout;
        }

    }
};
