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
    bool hasCycle(ListNode* head) {
        ListNode* hare = head;
        ListNode* tort = nullptr;
        int harecount = 0;
        while(hare != nullptr){
            if(hare != tort){
                hare = hare->next;
                harecount++;
                if(harecount == 2){
                    harecount = 0;
                    if(tort == nullptr){
                        tort = head;
                    }
                    else{
                        tort = tort->next;
                    }
                }
            }
            else{
                return true;
            }
        }
        return false;
    }
};
