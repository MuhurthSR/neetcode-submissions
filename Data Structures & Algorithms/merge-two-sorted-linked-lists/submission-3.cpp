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
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        ListNode* dummy = new ListNode();
        ListNode* ptr = dummy;

        while(cur1 != nullptr && cur2 != nullptr){
            if(cur1->val < cur2->val){
                ptr->next = cur1;
                cur1 = cur1->next;
            }
            else{
                ptr->next = cur2;
                cur2 = cur2->next;
            }
            ptr = ptr->next;
        }

        if(cur1 == nullptr){
            ptr->next = cur2;
        }else{
            ptr->next = cur1;
        }

        return dummy->next;
    }
};
