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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next){
            return nullptr;
        }
        ListNode* first=head;
        ListNode* second=head;
        ListNode* prev=nullptr;
        while(first && first->next){
            first=first->next->next;
            prev=second;
            second=second->next;
        }
        prev->next=second->next;
        delete second;
        return head;

    }
};