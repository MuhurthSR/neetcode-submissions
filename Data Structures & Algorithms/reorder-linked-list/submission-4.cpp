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
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* cur = secondHalf;


        while(cur != nullptr){
            ListNode* np = cur->next;
            cur->next = prev;
            prev = cur;
            cur = np;
        }

        secondHalf = prev;

        ListNode* list1 = head;
        ListNode* list2 = secondHalf;

        while(list2 != nullptr){
            ListNode* temp1 = list1->next;
            ListNode* temp2 = list2->next;

            list1->next = list2;
            list2->next = temp1;

            list1 = temp1;
            list2 = temp2;
        }
    }
};
